#include <iostream>

namespace First {
    int a = 10;
}

namespace Second {
    int a = 20;
}

int main() {
    std::cout << First::a << std::endl;
    std::cout << Second::a << std::endl;

    return 0;
}