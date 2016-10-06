#include <string>

#include <gtest/gtest.h>

#include <TweetStatistics.h>
#include <JsonParser.h>
#include <TwitterManager.h>

using namespace boost;
using namespace std;

int main(int argc, char * argv[]) {
    if (argc > 1 && argv[1] == std::string("-utester")) {
        std::cout << "Run tests..." << std::endl;
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    } else {
        string hash_tag = "itmo";
//        cin >> hash_tag;

        TwitterManager tm;
        optional<string> json = tm.GetJsonWithTweets(hash_tag);
        if (!json) {
            cout << "Can't get tweets with hashtag: " << hash_tag << endl;
            return EXIT_FAILURE;
        }

        JsonParser jp;
        optional<TwitterResponce> responce = jp.Parse(json.get());

        if (!responce) {
            cout << "Can't parse json: " << json.get() << endl;
            return EXIT_FAILURE;
        }

        TweetStatistics ts;
        map<size_t, size_t> res = ts.GetCntTweets(responce.get());

        for (pair<size_t, size_t> p: res) {
            cout << "day, stat: " << p.first << ", " << p.second << "\n";
        }
    }

    return EXIT_SUCCESS;
}
