#include <iostream>
#include <vector>
#include <algorithm>

#include <TweetStatistics.h>

using namespace json_spirit;
using std::vector;
using std::string;
using std::istream_iterator;

std::map<size_t, size_t> TweetStatistics::GetCntTweets(const Value &v) {
    std::map<size_t, size_t> res;
    Object obj = v.get_obj();

    for (size_t i = 0; i < obj.size(); ++i) {
        const Pair& p = obj[i];
        if (obj[i].name_ == "statuses") {
            const Array& tweets = p.value_.get_array();

            for (const Value& tweet: tweets) {
                for (const Pair& p: tweet.get_obj()) {
                    if (p.name_ == "created_at") {
                        std::cerr << p.value_.get_str() << std::endl;
                        std::istringstream iss(p.value_.get_str());
                        vector<string> tokens{istream_iterator<string>{iss},
                                              istream_iterator<string>{}};
                        res[std::stoi(tokens[2])]++;
                    }
                }
            }
        }
    }

    return res;
}
