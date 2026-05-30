#ifndef TESTPRIVATEUNITTEST_TESTCLASS_H
#define TESTPRIVATEUNITTEST_TESTCLASS_H

#include <gtest/gtest_prod.h>

namespace testprivateunittest::testclass {
class TestClass {
public:
    explicit TestClass(int num);

    int getNum() const;

    void addFour();

private:
    int num;

    int addTo(int a);

    FRIEND_TEST(TestTest, PrivateUsage);
};
} // testprivateunittest

#endif //TESTPRIVATEUNITTEST_TESTCLASS_H
