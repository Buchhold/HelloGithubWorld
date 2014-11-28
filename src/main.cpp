#include "util/MyClass.h"


int main() {
    MyClass inst;
    inst.sayHello();
    for (int i = 0; i < inst.returnFive(); ++i) {
        inst.sayFoo();
    }

    inst.anotherMethod();
    return 0;
}