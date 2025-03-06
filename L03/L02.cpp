#include "iostream"

int main(){
    int a;
    std::cin >> a;
    if (a%2) {
        std::cout << a << " - ";
        std::cout << "Не парне";
    } else {
        std::cout << "Парне";
    }


    return 0;
}