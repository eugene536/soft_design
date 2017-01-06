//
// Created by eugene on 12/24/16.
//
#pragma once
#include <iostream>

struct token_visitor;

struct token {
    virtual ~token() {}
    virtual void accept(token_visitor & visitor) const = 0;

    virtual void print() const {
        std::cerr << "base token" << std::endl;
    }
};
