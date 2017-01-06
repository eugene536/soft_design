//
// Created by eugene on 12/24/16.
//
#include <cassert>

#include "calc_visitor.h"


void calc_visitor::visit(number_token const &token) {
    _stack.push(token._num);
}

void calc_visitor::visit(brace_token const &token) {
    static_cast<void>(token);
    assert(false);
}

void calc_visitor::visit(operation_token const &token) {
    int r = _stack.top();
    _stack.pop();
    int l = _stack.top();
    _stack.pop();
    _stack.push(token.eval(l, r));
}
