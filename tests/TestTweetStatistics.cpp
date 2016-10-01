#ifdef _GTEST
#include <gtest/gtest.h>

#include <TweetStatistics.h>
#include <JsonParser.h>
#include <TwitterManager.h>

TEST(TweetStatistics, GetCntTweets) {
    TwitterManager tm;
    tm.DoRequest("itmo");

    JsonParser jp;
    auto parsed = jp.Parse(tm.GetLastResponseJson());

    ASSERT_TRUE(bool(parsed));

    TweetStatistics ts;
    auto res = ts.GetCntTweets(parsed.get());

    for (auto x: res) {
        std::cerr << x.first << " " << x.second << std::endl;
    }
}

//TEST(TweetStatistics, GetCntTweetsWithMock) {
//    TwitterManager tm;
//    tm.DoRequest("itmo");

//    JsonParser jp;
//    auto parsed = jp.Parse(tm.GetLastResponseJson());

//    ASSERT_TRUE(bool(parsed));

//    TweetStatistics ts;
//    auto res = ts.GetCntTweets(parsed.get());

//    for (auto x: res) {
//        std::cerr << x.first << " " << x.second << std::endl;
//    }
//}

#endif // _GTEST
