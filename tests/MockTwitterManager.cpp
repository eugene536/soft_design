#include <gmock/gmock.h>

#include <TwitterManager.h>

struct MockTwitterManager
    : public TwitterManager
{
    MOCK_METHOD1(DoRequest, bool(const std::string&));
    MOCK_METHOD0(GetLastResponseJson, std::string ());
};
