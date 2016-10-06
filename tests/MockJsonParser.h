#include <gmock/gmock.h>

#include <JsonParser.h>

struct MockJsonParser
    : public JsonParser
{
    MOCK_CONST_METHOD1(Parse, boost::optional<TwitterResponce> (const std::string &json));
};
