#ifdef _GTEST
#include <gtest/gtest.h>

#include <JsonParser.h>

TEST(JsonParser, ParserWork) {
    JsonParser jp;
    ASSERT_TRUE(bool(jp.Parse(R"({"id":10, "elements":[1, 2, 3]})")));
}

TEST(JsonParser, ParserFail) {
    JsonParser jp;
    ASSERT_FALSE(bool(jp.Parse(R"({"id:10, "elements":[1, 2, 3]})")));
}

#endif // _GTEST
