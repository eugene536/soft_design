#include <cassert>
#include <fstream>

#include <JsonParser.h>

boost::optional<json_spirit::Value> JsonParser::Parse(const std::string json) {
    json_spirit::Value v;
    if (!json_spirit::read(json, v)) {
        return boost::optional<json_spirit::Value>();
    }

    return boost::optional<json_spirit::Value>(v);
}
