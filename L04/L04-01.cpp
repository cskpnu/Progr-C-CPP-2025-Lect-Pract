#include "iostream";
int main() {
    int a, *pa, a1;
    double d, *pd;
    a = 5;
    pa = &a;
    a1 = *pa;

    std::cout << "a = " << a << std::endl;
    std::cout << "pa = " << pa << std::endl;
    std::cout << "a1 = " << a1 << std::endl;
    std::cout << "*pa = " << *pa << std::endl;
    std::cout << "&a = " << &a << std::endl;
    std::cout << "&pa = " << &pa << std::endl;

    return 0;
}