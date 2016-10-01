#ifdef _GTEST
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <TweetStatistics.h>
#include <JsonParser.h>
#include <TwitterManager.h>
#include <MockTwitterManager.h>

using ::testing::AtLeast;
using ::testing::_;
using ::testing::Return;

TEST(TweetStatistics, GetCntTweets) {
    return;
    TwitterManager tm;
    auto json = tm.GetJsonWithTweets("itmo");

    ASSERT_TRUE(json.is_initialized());

    JsonParser jp;
    auto parsed = jp.Parse(json.get());

    ASSERT_TRUE(bool(parsed));

    TweetStatistics ts;
    auto res = ts.GetCntTweets(parsed.get());

//    for (auto x: res) {
//        std::cerr << x.first << " " << x.second << std::endl;
//    }
}

TEST(TweetStatistics, GetCntTweetsWithMock) {
    const std::string simple_json =
            R"({"statuses":[{"created_at":"Sat Oct 01 09:27:18 +0000 2016"},)"
            R"({"created_at":"Sat Oct 02 09:27:18 +0000 2016"}],)"
            R"("search_metadata":{"completed_in":0.038}})";

    MockTwitterManager tm;

    EXPECT_CALL(tm, GetJsonWithTweets(_))
            .WillRepeatedly(Return(std::string("fail")));

    EXPECT_CALL(tm, GetJsonWithTweets("itmo"))
            .WillOnce(Return(simple_json));

    auto json = tm.GetJsonWithTweets("itmo");

    ASSERT_TRUE(json.is_initialized());

    JsonParser jp;
    auto parsed = jp.Parse(json.get());

    ASSERT_TRUE(bool(parsed));

    TweetStatistics ts;
    auto res = ts.GetCntTweets(parsed.get());

    ASSERT_EQ(res.size(), 2);
    ASSERT_TRUE(res[1] == 1);
    ASSERT_TRUE(res[2] == 1);
}

#endif // _GTEST
