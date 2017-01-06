//
// Created by eugene on 12/24/16.
//

#include <cassert>
#include "operation_token.h"
#include "token_visitor.h"

operation_token::operation_token(char _operation)
        : _operation(_operation)
{}

void operation_token::accept(token_visitor &visitor) const {
    visitor.visit(*this);
}

void operation_token::print() const {
    std::cerr << "operation: " << _operation << std::endl;
}

int operation_token::priority() const {
    if ('*' == _operation || '/' == _operation) {
        return 2;
    }

    return 1;
}

int operation_token::eval(int l, int r) const {
    switch(_operation) {
        case '+':
            return l + r;
        case '*':
            return l * r;
        case '/':
            return l / r;
        case '-':
            return l - r;
    }

    assert(false);
}


number_token::number_token(int _num)
        : _num(_num)
{}

void number_token::accept(token_visitor &visitor) const {
    visitor.visit(*this);
}

void number_token::print() const {
    std::cerr << "number: " << _num << std::endl;
}

brace_token::brace_token(bool _left)
        : _left(_left)
{}

void brace_token::accept(token_visitor &visitor) const {
    visitor.visit(*this);
}

void brace_token::print() const {
    std::cerr << "brace: " << ")("[_left] << std::endl;
}
