#include <cassert>
#include <fstream>
#include <map>

#include "json_spirit_reader.h"

#include <JsonParser.h>

using namespace json_spirit;

boost::optional<TwitterResponce> JsonParser::Parse(const std::string &json) const {
    json_spirit::Value v;
    boost::optional<TwitterResponce> ret;
    if (!json_spirit::read(json, v)) {
        return ret;
    }

    TwitterResponce twit_resp;
    Object obj = v.get_obj();
    for (size_t i = 0; i < obj.size(); ++i) {
        const Pair& p = obj[i];
        if (p.name_ == "statuses") {
            const Array& tweets = p.value_.get_array();

            for (const Value& tweet: tweets)
                for (const Pair& p: tweet.get_obj())
                    if (p.name_ == "created_at") {
                        twit_resp._times.push_back(p.value_.get_str());
                        break;
                    }

            break;
        }
    }

    return twit_resp;
}
