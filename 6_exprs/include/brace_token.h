//
// Created by eugene on 12/24/16.
//
#pragma once
#include "token.h"

struct brace_token
    : token
{
    brace_token(bool _left);

    virtual void accept(token_visitor &visitor) const override;

    virtual void print() const override;

    bool _left;
};
