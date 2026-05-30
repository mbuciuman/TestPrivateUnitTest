#include <cstdio>
#include <print>

#include "../include/testclass/TestClass.h"

using namespace testprivateunittest::testclass;

int main() {
    auto testClass = TestClass(4);
    // Same as:
    // TestClass testClass = TestClass(4);
    // TestClass testClass(4);
    printf("%d\n", testClass.getNum());
    testClass.addFour();
    printf("%d\n", testClass.getNum());
    return 0;
}
