//
// Created by eugene on 12/24/16.
//
#include <cctype>

#include "tokenizer.h"

#include "number_token.h"
#include "operation_token.h"
#include "brace_token.h"

namespace {
    bool operation(char c) {
        return '/' == c || '*' == c ||
               '+' == c || '-' == c;
    }

    bool brace(char c) {
        return '(' == c || ')' == c;
    }
}

tokenizer::tokenizer()
    : _state(new blank_state)
{}

token * tokenizer::parse_token(char const *&first, char const *last) {
    for (; first != last; ++first) {
        token * token_;
        while (first != last && nullptr == (token_ = _state->process(this, first, last)));
        return token_;
    }

    return nullptr;
}

token * number_state::process(tokenizer * tokenizer_, char const *&first, char const *last) {
    static_cast<void>(last);
    _cur_num *= 10;
    _cur_num += *first - '0';

    first++;

    if (!std::isdigit(*first)) {
        std::shared_ptr<state> closure_this = tokenizer_->_state;
        tokenizer_->_state = std::shared_ptr<state>(new blank_state);
        return new number_token(_cur_num);
    }

    return nullptr;
}

token * blank_state::process(tokenizer * tokenizer_, char const *& first, char const * last) {
    if (std::isspace(*first)) {
        first++;
        return nullptr;
    } else if (std::isdigit(*first)) {
        tokenizer_->_state = std::shared_ptr<state>(new number_state);
        return tokenizer_->_state->process(tokenizer_, first, last);
    }  else if (operation(*first)) {
        return new operation_token(*first++);
    } else if (brace(*first)) {
        return new brace_token('(' == *first++);
    } else {
        throw std::invalid_argument("can't parse: " + std::string(first, last));
    }
}
