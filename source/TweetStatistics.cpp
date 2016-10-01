#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

#include <TweetStatistics.h>

using std::vector;
using std::string;
using std::istream_iterator;

std::map<size_t, size_t> TweetStatistics::GetCntTweets(const TwitterResponce &resp) const {
    std::map<size_t, size_t> res;

    for (const string& time: resp._times) {
        std::istringstream iss(time);
        vector<string> tokens{istream_iterator<string>{iss},
                              istream_iterator<string>{}};
        res[std::stoi(tokens[2])]++;
    }

    return res;
}
