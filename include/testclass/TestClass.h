#ifndef TESTPRIVATEUNITTEST_TESTCLASS_H
#define TESTPRIVATEUNITTEST_TESTCLASS_H

// Necessary minimal header to allow for FRIEND_TEST to be included
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

    // GTest Friend declarations - need to list individual units that require access to private members
    FRIEND_TEST(TestTest, PrivateUsage);
};
} // testprivateunittest

#endif //TESTPRIVATEUNITTEST_TESTCLASS_H
