//
// Created by eugene on 12/24/16.
//
#pragma once
#include <memory>

#include "token.h"

struct tokenizer;

struct state {
    virtual ~state() {}
    virtual token* process(tokenizer * tokenizer_, char const *&first, char const *last) = 0;
};

struct tokenizer {
    tokenizer();
    token * parse_token(char const *& first, char const * last);

    std::shared_ptr<state> _state;
};

struct number_state
    : state
{
    token* process(tokenizer * tokenizer_, char const *&first, char const *last) override;

    int _cur_num = 0;
};

struct blank_state
    : state
{
    token* process(tokenizer * tokenizer_, char const *&first, char const *last) override;
};

