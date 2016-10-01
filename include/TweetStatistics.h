#pragma once
#include <map>

#include <json_spirit.h>

struct TweetStatistics {
    virtual ~TweetStatistics() = default;
    virtual std::map<size_t, size_t> GetCntTweets(const json_spirit::Value &v);
};
