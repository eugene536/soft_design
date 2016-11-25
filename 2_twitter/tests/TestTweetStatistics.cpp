#ifdef _GTEST
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <TweetStatistics.h>
#include <JsonParser.h>
#include <TwitterManager.h>
#include <MockTwitterManager.h>
#include <MockJsonParser.h>

using ::testing::AtLeast;
using ::testing::_;
using ::testing::Return;

TEST(TweetStatistics, GetCntTweets) {
    TwitterManager tm;
    auto json = tm.GetJsonWithTweets("itmo");

    ASSERT_TRUE(json.is_initialized());

    JsonParser jp;
    auto parsed = jp.Parse(json.get());

    ASSERT_TRUE(bool(parsed));

    TweetStatistics ts;
    auto res = ts.GetCntTweets(parsed.get());

    ASSERT_TRUE(res.size() > 0);
}

TEST(TweetStatistics, GetCntTweetsWithMockParser) {
    MockJsonParser jp;
    TwitterResponce tr = {
        "itmo",
        {"Sat Oct 02 09:27:18 +0000 2016",
         "Sat Oct 02 09:97:18 +0000 2016"}
    };

    EXPECT_CALL(jp, Parse(_))
        .WillOnce(Return(tr));
    boost::optional<TwitterResponce> parsed = jp.Parse("test");

    ASSERT_TRUE(bool(parsed));

    TweetStatistics ts;
    std::map<size_t, size_t> res = ts.GetCntTweets(parsed.get());

    ASSERT_EQ(res.size(), 1);
    ASSERT_EQ(res[1], 0);
    ASSERT_EQ(res[2], 2);
}

TEST(TweetStatistics, GetCntTweetsWithMockManager) {
    const std::string simple_json =
            R"({"statuses":[{"created_at":"Sat Oct 01 09:27:18 +0000 2016"},)"
            R"({"created_at":"Sat Oct 02 09:27:18 +0000 2016"},)"
            R"({"created_at":"Sat Oct 02 09:27:18 +0000 2016"}],)"
            R"("search_metadata":{"completed_in":0.038}})";

    MockTwitterManager tm;

    EXPECT_CALL(tm, GetJsonWithTweets("itmo"))
            .WillOnce(Return(simple_json));

    boost::optional<std::string> json = tm.GetJsonWithTweets("itmo");

    ASSERT_TRUE(json.is_initialized());

    JsonParser jp;
    boost::optional<TwitterResponce> parsed = jp.Parse(json.get());

    ASSERT_TRUE(bool(parsed));

    TweetStatistics ts;
    std::map<size_t, size_t> res = ts.GetCntTweets(parsed.get());

    ASSERT_EQ(res.size(), 2);
    ASSERT_EQ(res[1], 1);
    ASSERT_EQ(res[2], 2);
}

#endif // _GTEST
