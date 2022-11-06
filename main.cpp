#include <iostream>
#include "TemplateCppLibrary/TemplateCppClass.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << TemplateCppClass::GetSomething() << std::endl;

    return 0;
}
