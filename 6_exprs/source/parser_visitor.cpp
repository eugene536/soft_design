//
// Created by eugene on 12/24/16.
//

#include "parser_visitor.h"

#include "number_token.h"
#include "brace_token.h"
#include "operation_token.h"

void parser_visitor::visit(number_token const &token_) {
    _polish_tokens.push_back(&token_);
}

void parser_visitor::visit(brace_token const &token_) {
    if (token_._left) {
        _stack.push(&token_);
    } else {
        while (true) {
            if (_stack.empty()) {
                throw std::invalid_argument("can't find close parenthesis");
            }

            token const *token_s = _stack.top();

            if (dynamic_cast<brace_token const *>(token_s)) {
                brace_token const *brace_left = (brace_token const *) token_s;

                if (brace_left->_left) {
                    _stack.pop();
                    break;
                } else {
                    throw std::invalid_argument("unexpected )");
                }
            } else {
                _polish_tokens.push_back(token_s);
            }
            _stack.pop();
        }
    }
}

void parser_visitor::visit(operation_token const &token_) {
    while (!_stack.empty()) {
        token const * token_s = _stack.top();
        operation_token const * op_s = dynamic_cast<operation_token const *>(token_s);

        if (op_s && op_s->priority() > token_.priority()) {
            _stack.pop();
            _polish_tokens.push_back(op_s);
        } else {
            break;
        }
    }

    _stack.push(&token_);
}

void parser_visitor::push_stack() {
    while (!_stack.empty()) {
        _polish_tokens.push_back(_stack.top());
        _stack.pop();
    }
}
