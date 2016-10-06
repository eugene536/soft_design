#include <iostream>
#include <cassert>

#include <CkHttp.h>
#include <CkHttpRequest.h>
#include <CkHttpResponse.h>

#include "TwitterManager.h"

using boost::optional;
using std::string;

optional<string> TwitterManager::GetJsonWithTweets(const string& tweet_name) const {
    static CkHttp http;
    static char const * kUrlHead = "https://api.twitter.com/1.1/search/tweets.json?";

    optional<string> res;
    if (!http.UnlockComponent("Anything for 30-day trial")) {
        std::cerr << http.lastErrorText() << "\n";
        return res;
    }

    http.put_OAuth1(true);
    http.put_OAuthVerifier("");
    http.put_OAuthConsumerKey("8XQTk6rCVDAhH13KaRnC5Wjkd");
    http.put_OAuthConsumerSecret("UfARtXhmyKXsYykWlFtWMx2kUoDuVjZU6ZOwnbRiWDtKDGtXrS");
    http.put_OAuthToken("781888155372908544-PVbpIFaZnGmElncuWHexnK2i4weHpjV");
    http.put_OAuthTokenSecret("BXtB8ZS08b66eytazXuygzZOaMolZBMQ0sNHDuKd6svyG");

    std::string request = kUrlHead + ("q=" + tweet_name);
    CkHttpResponse * resp = http.QuickGetObj(request.c_str());

    if (resp || 200 == resp->get_StatusCode()) {
        res = resp->bodyStr();
    } else {
        std::cerr << http.lastErrorText() << "\r\n";
    }
    delete resp;

    return res;
}
