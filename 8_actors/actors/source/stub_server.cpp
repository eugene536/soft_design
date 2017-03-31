//
// Created by eugene on 25.3.2017
//

#include "stub_server.h"

responce_t stub_server::do_request(const request_t &request) {
    responce_t responce;

    auto it = _reqests.find(request);
    if (_reqests.end() != it) {
        responce = it->second;
    } else {
        responce = _default_responce;
    }

    return responce;
}

yandex_server::yandex_server() {
    _reqests = {
        {"Best mouse"   , {"Yandex ATech"   , "Yandex Mouse"}},
        {"Best keyboard", {"Yandex keyboard", "Yandex keyboard"}}
    };

    _default_responce = {"yandex default responce"};
}

google_server::google_server() {
    _reqests = {
        {"Best mouse"   , {"Google ATech"   , "Google Mouse"}},
        {"Best keyboard", {"Google keyboard", "Google keyboard"}}
    };

    _default_responce = {"google default responce"};
}

bing_server::bing_server() {
    _reqests = {
        {"Best mouse"   , {"Bing ATech"   , "Bing Mouse"}},
        {"Best keyboard", {"Bing keyboard", "Bing keyboard"}}
    };

    _default_responce = {"bing default responce"};
}
