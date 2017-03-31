//
// Created by eugene on 25.3.2017
//
#pragma once

#include <string>
#include <vector>
#include <map>

typedef std::vector<std::string> responce_t;
typedef std::string request_t;

struct stub_server {
    virtual ~stub_server() {}

    virtual responce_t do_request(request_t const & request);

    std::map<request_t, responce_t> _reqests;
    responce_t _default_responce;
};

struct google_server
    : stub_server
{
    google_server();
};

struct yandex_server
    : stub_server
{
    yandex_server();
};

struct bing_server
    : stub_server
{
    bing_server();
};
