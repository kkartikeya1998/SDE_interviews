#include <iostream>

int main() {
    const char* c1 = "abcdef";
    const char c2[] = "abcdef";
    const char c3[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    std::cout << sizeof(c1) << " "
              << sizeof(c2) << " "
              << sizeof(c3) << std::endl;

    return 0;
}