//
// Created by eugene on 12/24/16.
//
#pragma once
#include "token.h"

struct operation_token
        : token
{
    operation_token(char _operation);

    virtual void accept(token_visitor &visitor) const override;

    virtual void print() const override;

    int priority() const;

    int eval(int l, int r) const;

    char _operation;
};

