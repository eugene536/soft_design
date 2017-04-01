//
// Created by eugene on 1.4.2017
//
#pragma once

#include<chrono>


struct setable_clock {
    typedef std::chrono::time_point<setable_clock, std::chrono::seconds> time_point;

    static time_point now() noexcept;
    static void set_seconds(uint32_t seconds);

    static time_point _now;
};
