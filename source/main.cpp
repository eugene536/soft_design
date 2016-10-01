#include <string>
#include <gtest/gtest.h>

int main(int argc, char * argv[]) {
    if (argc > 1 && argv[1] == std::string("-utester")) {
        std::cout << "Run tests..." << std::endl;
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    } else {
    //    TwitterManager tm;
    //    if (tm.DoRequest("itmo")) {
    //        std::cout << tm.GetLastResponseJson() << std::endl;
    //    }

//        JsonParser jp;
//        jp.get();
    }

    return 0;
}
