#pragma once

#include <map>

#include <TwitterResponce.h>

struct TweetStatistics {
    virtual ~TweetStatistics() = default;
    virtual std::map<size_t, size_t> GetCntTweets(const TwitterResponce &resp) const;
};
