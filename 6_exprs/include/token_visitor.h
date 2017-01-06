//
// Created by eugene on 12/24/16.
//
#pragma once

#include "number_token.h"
#include "brace_token.h"
#include "operation_token.h"

struct token_visitor {
    virtual ~token_visitor() {}
    virtual void visit(number_token const & token) = 0;
    virtual void visit(brace_token const & token) = 0;
    virtual void visit(operation_token const & token) = 0;
};

