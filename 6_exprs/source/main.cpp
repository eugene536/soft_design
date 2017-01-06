#include <iostream>
#include <vector>
#include <calc_visitor.h>

#include "tokenizer.h"
#include "parser_visitor.h"

int main() {
    std::string expr = "1 + 3 * (2 + 5) - 4 / 2";

    char const * f = expr.data();
    char const * l = f + expr.size();

    std::vector<std::unique_ptr<token>> tokens;
    tokenizer t;
    while (true) {
        token * token_ = t.parse_token(f, l);
        if (nullptr == token_) {
            break;
        }

        tokens.push_back(std::unique_ptr<token>(token_));
    }

    parser_visitor parser_visitor_;
    std::cerr << "size: " << tokens.size() << std::endl;
    for (std::unique_ptr<token>& p: tokens) {
        p->print();

        p->accept(parser_visitor_);
    }

    std::cerr << std::endl;

    parser_visitor_.push_stack();

    calc_visitor calc_visitor_;
    std::cerr << "reverse polish notation:" << std::endl;
    for (token const * t: parser_visitor_._polish_tokens) {
        t->print();
        t->accept(calc_visitor_);
    }

    std::cerr << std::endl;
    std::cerr << calc_visitor_._stack.top() << std::endl;

    return 0;
}
