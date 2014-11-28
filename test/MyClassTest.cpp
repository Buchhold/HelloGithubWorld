#include "../src/util/MyClass.h"
#include "gtest/gtest.h"

TEST(MyClassTest, testReturnFive) {
    ASSERT_EQ(5, MyClass().returnFive());
};

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}