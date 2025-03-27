#include <iostream>
int main() {
    char hello1[]{'h', 'e', 'l', 'l', 'o'};
    char hello2[]{'h', 'e', 'l', 'l', 'o', '\0'};
    char hello3[]{"hello"};
    std::cout << hello1 << std::endl;
    std::cout << hello2 << std::endl;
    std::cout << hello3 << std::endl;
    return 0;
}
