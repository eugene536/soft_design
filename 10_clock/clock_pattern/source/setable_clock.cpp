//
// Created by eugene on 1.4.2017
//
#include "setable_clock.h"

setable_clock::time_point setable_clock::_now;

setable_clock::time_point setable_clock::now() noexcept {
    return _now;
}

void setable_clock::set_seconds(uint32_t seconds) {
    _now = time_point(std::chrono::seconds(seconds));
}

