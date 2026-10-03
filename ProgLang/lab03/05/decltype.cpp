#include <iostream>

int main() {
    double price = 99.5;
    decltype(price) discount = 10.0;

    std::cout << price - discount << std::endl;
}