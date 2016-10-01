#include <iostream>
#include <cassert>

#include <CkHttp.h>
#include <CkHttpRequest.h>
#include <CkHttpResponse.h>

#include "TwitterManager.h"

using boost::optional;
using std::string;

optional<string> TwitterManager::GetJsonWithTweets(const string& tweet_name) const {
    static CkHttp _http;
    static char const * kUrlHead = "https://api.twitter.com/1.1/search/tweets.json?";

    optional<string> res;
    if (!_http.UnlockComponent("Anything for 30-day trial")) {
        std::cerr << _http.lastErrorText() << "\n";
        return res;
    }

    _http.put_OAuth1(true);
    _http.put_OAuthVerifier("");
    _http.put_OAuthConsumerKey("8XQTk6rCVDAhH13KaRnC5Wjkd");
    _http.put_OAuthConsumerSecret("UfARtXhmyKXsYykWlFtWMx2kUoDuVjZU6ZOwnbRiWDtKDGtXrS");
    _http.put_OAuthToken("781888155372908544-PVbpIFaZnGmElncuWHexnK2i4weHpjV");
    _http.put_OAuthTokenSecret("BXtB8ZS08b66eytazXuygzZOaMolZBMQ0sNHDuKd6svyG");

    std::string request = kUrlHead + ("q=" + tweet_name);
    CkHttpResponse * _resp = _http.QuickGetObj(request.c_str());

    if (_resp || 200 == _resp->get_StatusCode()) {
        res = _resp->bodyStr();
    } else {
        std::cerr << _http.lastErrorText() << "\r\n";
    }
    delete _resp;

    return res;
}
