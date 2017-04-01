//
// Created by eugene on 1.4.2017
//

#ifdef _GTEST
#  include <gtest/gtest.h>
#endif

int main(int argc, char * argv[]) {
#ifdef _GTEST
    std::cout << "Run tests..." << std::endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
#endif

    return 0;
}
