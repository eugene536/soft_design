//
// Created by eugene on 1.4.2017
//
#pragma once

#include <map>
#include <string>
#include <vector>
#include <queue>
#include <cstdint>
#include <chrono>

struct event_statistics {
    typedef uint32_t statistics_t;
    typedef std::string name_t;

    virtual ~event_statistics() {}

    virtual void inc_event(name_t const & name) = 0;

    virtual statistics_t get_event_statistics(name_t const & name) = 0;

    virtual std::map<name_t, statistics_t> get_all_event_statistics() const = 0;

    virtual void print() = 0;
};

template<typename ClockT>
struct event_statistics_last_hour
    : event_statistics
{
    typedef typename ClockT::time_point time_point;
    typedef std::queue<time_point> time_points_t;
    typedef std::map<name_t, time_points_t> timed_statistics_t;

    event_statistics_last_hour(std::chrono::hours interesting_period = std::chrono::hours(1))
        : _interesting_period(interesting_period)
    {}

    void inc_event(const event_statistics::name_t &name) {
        time_points_t & points = _statistics[name];

        points.push(ClockT::now());
    }

    statistics_t get_event_statistics(const name_t &name) override {
        using namespace std::chrono;

        time_points_t & points = _statistics.at(name);
        event_statistics_last_hour::time_point cur_time = ClockT::now();

        while (duration_cast<hours>(cur_time - points.front()) > _interesting_period) {
            points.pop();
        }

        if (points.size() > 1) {
            uint32_t whole_time =
                    duration_cast<seconds>(points.back() - points.front()).count();

            double part_of_minute = whole_time * 1.0 / 60;

            return points.size() / part_of_minute;
        } else if (points.size() == 1) {
            return points.size();
        } else {
            return 0;
        }
    }

    std::map<name_t, statistics_t> get_all_event_statistics() const override {
        return {};
    }

    void print() override {
        for (auto const & p: _statistics) {
            std::cerr << p.first << " " << get_event_statistics(p.first) << std::endl;
        }
    }

    std::chrono::hours _interesting_period;
    timed_statistics_t _statistics;
};
