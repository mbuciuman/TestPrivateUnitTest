#include "testclass/TestClass.h"

#include <gtest/gtest.h>

namespace testprivateunittest::testclass {
TEST(TestTest, BasicUsage) {
    auto testClass = TestClass(3);
    EXPECT_EQ(3, testClass.getNum());
}

TEST(TestTest, PrivateUsage) {
    auto testClass = TestClass(4);
    EXPECT_EQ(4, testClass.getNum());
    EXPECT_EQ(8, testClass.addTo(4));
}
}
