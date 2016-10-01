#pragma once

#include <boost/optional.hpp>
#include <json_spirit.h>

struct JsonParser {
    JsonParser() = default;
    virtual ~JsonParser() = default;
    virtual boost::optional<json_spirit::Value> Parse(const std::string json);
};
