#pragma once

#include <string>
#include <boost/optional.hpp>

struct TwitterManager {
    virtual ~TwitterManager() = default;
    virtual boost::optional<std::string> GetJsonWithTweets(const std::string& tweet_name) const;
};
