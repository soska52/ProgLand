#include <iostream>

int main() {
    int a = 125;
    int b = -40;
    int c = 0175;
    int d = 0x7B;
    int e = 0b101101;

    unsigned int f = 300U;
    long g = 500L;
    unsigned long h = 600UL;
    long long i = 700LL;
    unsigned long long j = 800ULL;

    std::cout << a << " " << b << std::endl;
    std::cout << c << " " << d << " " << e << std::endl;
    std::cout << f << " " << g << " " << h << std::endl;
    std::cout << i << " " << j << std::endl;

    return 0;
}