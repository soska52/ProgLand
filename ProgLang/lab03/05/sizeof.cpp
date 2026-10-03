#include <iostream>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    std::cout << sizeof(numbers) / sizeof(numbers[0]) << std::endl;
}