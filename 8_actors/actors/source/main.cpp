//
// Created by eugene on 25.3.2017
//
#include <string>
#include <iostream>
#include <thread>
#include <chrono>

#include <caf/all.hpp>

#include "stub_server.h"

using std::endl;
using std::string;

using namespace caf;

using searcher_actor = typed_actor<replies_to<request_t>::with<responce_t>,
                                   reacts_to<down_msg>,
                                   reacts_to<exit_msg>>;

template<typename ServerT>
behavior searcher(event_based_actor * self) {
    std::string const name = typeid(ServerT).name();

    return {
        [=] (request_t const & request) {
            ServerT server;

//            aout(self) << "request to: " << name << " arrived" << endl;

            if (request == "expired" && name == "11bing_server") {
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }

            return server.do_request(request);
        },

        [=] (down_msg& dm) {
            aout(self) << name << " is down" << endl;
            self->quit(dm.reason);
            exit(0);
        },

        [=] (exit_msg const &) {
            aout(self) << "exit stari kaska: " << name << std::endl;
            self->quit();
            exit(0);
        }
    };
}

using master_actor = typed_actor<reacts_to<responce_t>,
                                 reacts_to<exit_msg>>;

void master(event_based_actor * self, std::string const & request, const std::vector<actor> & actors)
{
    struct result {
        responce_t _responce;
        uint8_t    _cnt_responces = 0;
    };

    std::shared_ptr<result> res(new result);

    auto then_functor =
        [=](responce_t const & responce) mutable {
            res->_responce.insert(res->_responce.begin(), responce.begin(), responce.end());
            res->_cnt_responces++;

//            aout(self) << "responce from ~ arrived" << endl;

            if (res->_cnt_responces == 3) {

                for (std::string const & sin_responce: res->_responce) {
                    aout(self) << sin_responce << endl;
                }

                for (actor const & a: actors) {
                    self->send_exit(a, exit_reason::user_shutdown);
                }

                self->quit();
            }
        };

    for (actor const & a: actors) {
        self->request(a, std::chrono::seconds(2), request)
              .then(then_functor,
                [=](const error&) {
                    aout(self) << "timer expired" << endl;
                });
    }
}

void busy_loop(actor_system& system) {
    std::string const exit_req = "exit";
    std::string request;

    while (true) {
        std::cout << "req >> ";
        if (!std::getline(std::cin, request)) {
            break;
        }

        if (exit_req == request) {
            break;
        }

        std::vector<actor> actors{ system.spawn(searcher<yandex_server>),
                                   system.spawn(searcher<google_server>),
                                   system.spawn(searcher<bing_server>) };

        auto master_actor = system.spawn(master, request, actors);
    }
}

int main() {
  actor_system_config cfg;
  actor_system system{cfg};

  busy_loop(system);

  return 0;
}
