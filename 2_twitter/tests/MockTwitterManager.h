#include <gmock/gmock.h>

#include <TwitterManager.h>

struct MockTwitterManager
    : public TwitterManager
{
    MOCK_METHOD1(GetJsonWithTweets, boost::optional<std::string> (const std::string& tweet_name));
};
