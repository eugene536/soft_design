#include <iostream>
#include <cassert>

#include <CkOAuth2.h>
#include <CkHttpRequest.h>
#include <CkHttpResponse.h>

#include "TwitterManager.h"


TwitterManager::~TwitterManager() {
    delete _resp;
}

bool TwitterManager::DoRequest(const std::string& tweet_name) {
    bool result = false;

    if (!_http.UnlockComponent("Anything for 30-day trial")) {
        std::cerr << _http.lastErrorText() << "\n";
        return result;
    }

    _http.put_OAuth1(true);
    _http.put_OAuthVerifier("");
    _http.put_OAuthConsumerKey("8XQTk6rCVDAhH13KaRnC5Wjkd");
    _http.put_OAuthConsumerSecret("UfARtXhmyKXsYykWlFtWMx2kUoDuVjZU6ZOwnbRiWDtKDGtXrS");
    _http.put_OAuthToken("781888155372908544-PVbpIFaZnGmElncuWHexnK2i4weHpjV");
    _http.put_OAuthTokenSecret("BXtB8ZS08b66eytazXuygzZOaMolZBMQ0sNHDuKd6svyG");

    delete _resp;
    std::string request = kUrlHead + ("q=" + tweet_name);
    _resp = _http.QuickGetObj(request.c_str());

    if (!_resp) {
        std::cerr << _http.lastErrorText() << "\n";
        return result;
    }

    if (200 == _resp->get_StatusCode()) {
        result = true;
    } else {
        std::cerr << _http.lastErrorText() << "\r\n";
    }

    return result;
}

std::string TwitterManager::GetLastResponseJson() {
    assert(nullptr != _resp);

    return _resp->bodyStr();
}
