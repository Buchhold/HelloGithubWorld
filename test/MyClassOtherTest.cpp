#include "../src/util/MyClass.h"
#include "gtest/gtest.h"

TEST(MyClassOtherTest, testReturnFive) {
    ASSERT_LT(4, MyClass().returnFive());
    ASSERT_GE(5, MyClass().returnFive());
};


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}