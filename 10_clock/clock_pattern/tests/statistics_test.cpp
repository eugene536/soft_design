//
// Created by eugene on 1.4.2017
//
#ifdef _GTEST

#include <string>
#include <iostream>
#include <thread>
#include <chrono>

#include "statistics.h"
#include "setable_clock.h"

#include <gtest/gtest.h>

using namespace std::chrono;

TEST(statistics, one_event) {
    event_statistics_last_hour<setable_clock> stat;

    stat.inc_event("event1");

    ASSERT_EQ(stat.get_event_statistics("event1"), 1);
}

TEST(statistics, three_events_per_minute) {
    event_statistics_last_hour<setable_clock> stat;

    setable_clock::set_seconds(0);
    stat.inc_event("event1");
    setable_clock::set_seconds(50);
    stat.inc_event("event1");
    setable_clock::set_seconds(55);
    stat.inc_event("event1");

    ASSERT_EQ(stat.get_event_statistics("event1"), 3);
}

TEST(statistics, one_event_per_minute) {
    event_statistics_last_hour<setable_clock> stat;

    for (int i = 0; i < 3; ++i) {
        setable_clock::set_seconds(i * 60 + i);
        stat.inc_event("event1");
    }

    ASSERT_EQ(stat.get_event_statistics("event1"), 1);
}

TEST(statistics, several_events_per_minute) {
    event_statistics_last_hour<setable_clock> stat;

    for (int i = 0; i < 3; ++i) {
        setable_clock::set_seconds(i * 60 + i);
        stat.inc_event("event1");
    }

    for (int i = 0; i < 10; ++i) {
        setable_clock::set_seconds(i);
        stat.inc_event("event2");
    }

    setable_clock::set_seconds(60);
    stat.inc_event("event2");

    ASSERT_EQ(stat.get_event_statistics("event1"), 1);
    ASSERT_EQ(stat.get_event_statistics("event2"), 11);
}

#endif
