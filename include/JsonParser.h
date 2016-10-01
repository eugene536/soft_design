#pragma once

#include <boost/optional.hpp>
#include <TwitterResponce.h>

struct JsonParser {
    JsonParser() = default;
    virtual ~JsonParser() = default;
    virtual boost::optional<TwitterResponce> Parse(const std::string& json) const;
};
