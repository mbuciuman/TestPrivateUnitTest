#include "TestClass.h"

#include <gtest/gtest.h>

namespace testprivateunittest::testclass {
/**
 * Test WITHOUT private member access.
 */
TEST(TestTest, BasicUsage) {
    auto testClass = TestClass(3);
    // EXPECT_EQ(4, testClass.getNum()) << "Constructor did not set member correctly";
    // Same as:
    // if (testClass.getNum() != 3)
    // {
    //     FAIL();
    // }
    ASSERT_TRUE(testClass.getNum() == 4) << "Constructor did not set member correctly";
}

/**
 * Test WITH private member access.
 */
TEST(TestTest, PrivateUsage) {
    TestClass testClass(4);
    EXPECT_EQ(4, testClass.getNum());
    EXPECT_EQ(8, testClass.addTo(4));
    FAIL() << "Test fail";
}
}
