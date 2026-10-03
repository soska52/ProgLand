#include <iostream>

int main() {
    int total = 10;
    int count = 3;

    double average = static_cast<double>(total) / count;

    std::cout << average << std::endl;
}