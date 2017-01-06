//
// Created by eugene on 12/24/16.
//
#pragma once

#include <stack>
#include "token_visitor.h"
#include "token.h"

struct calc_visitor
        : token_visitor
{
    virtual void visit(number_token const &token) override;

    virtual void visit(brace_token const &token) override;

    virtual void visit(operation_token const &token) override;

    std::stack <int> _stack;
    int _res;
};
