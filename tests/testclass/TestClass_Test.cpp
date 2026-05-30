#include "testclass/TestClass.h"

#include <gtest/gtest.h>

namespace testprivateunittest::testclass {
/**
 * Test WITHOUT private member access.
 */
TEST(TestTest, BasicUsage) {
    auto testClass = TestClass(3);
    EXPECT_EQ(3, testClass.getNum());
}

/**
 * Test WITH private member access.
 */
TEST(TestTest, PrivateUsage) {
    TestClass testClass(4);
    EXPECT_EQ(4, testClass.getNum());
    EXPECT_EQ(8, testClass.addTo(4));
}
}
