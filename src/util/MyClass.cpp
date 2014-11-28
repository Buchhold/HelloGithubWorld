#include <iostream>
#include "./MyClass.h"

void MyClass::sayHello() const {
    std::cout << "Hello from inside!" << std::endl;
}

void MyClass::sayFoo() const {
    std::cout << "Foo" << std::endl;
}

void MyClass::anotherMethod() {

}

int MyClass::returnFive() {
    return 5;
}
