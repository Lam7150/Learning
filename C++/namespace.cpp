#include <iostream>
#include "MyNamespace.h"

int main() {
    int boo;
    std::cout << "boo is " << MyNamespace::boo << std::endl;
    MyNamespace::foo();
}

namespace MyNamespace {
    int boo = 7;
    void foo() {
        std::cout << "foo in MyNameSpace\n";
    }
}