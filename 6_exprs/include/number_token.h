//
// Created by eugene on 12/24/16.
//
#pragma once
#include "token.h"

struct number_token
    : token
{
    number_token(int _num);

    virtual void accept(token_visitor &visitor) const override;

    virtual void print() const override;

    int _num;
};
