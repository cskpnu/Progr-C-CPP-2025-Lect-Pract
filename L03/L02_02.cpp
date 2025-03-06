#include "iostream"

int main(){
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;
    int c;
    std::cin >> c;

    if (a > b && a > c) {
        std::cout << a;
    } else if (b > a && b > c) {
        std::cout << b;
    } else {
        std::cout << c;
    }

    return 0;
}