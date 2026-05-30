#include "../../include/testclass/TestClass.h"

namespace testprivateunittest::testclass {
TestClass::TestClass(const int num) : num(num) {
}

int TestClass::getNum() const {
    return num;
}

void TestClass::addFour() {
    num += 4;
}

int TestClass::addTo(const int a) {
    num += a;
    return num;
};
} // testprivateunittest
