#pragma once

#include <string>

#include <CkHttp.h>

class TwitterManager
{
public:
    TwitterManager() = default;
    virtual ~TwitterManager();

    virtual bool DoRequest(const std::string& tweet_name);
    virtual std::string GetLastResponseJson();

private:
    char const * kUrlHead = "https://api.twitter.com/1.1/search/tweets.json?";

    CkHttp _http;
    CkHttpResponse * _resp = nullptr;
};
