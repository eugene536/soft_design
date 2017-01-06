//
// Created by eugene on 12/24/16.
//
#pragma once

#include <stack>
#include <vector>
#include "token_visitor.h"
#include "token.h"

struct parser_visitor
    : token_visitor
{
    virtual void visit(number_token const &token) override;

    virtual void visit(brace_token const &token) override;

    virtual void visit(operation_token const &token) override;

    void push_stack();

    std::stack <token const *> _stack;
    std::vector<token const *> _polish_tokens;
};

