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

    int *pb = pa;

    std::cout << "pb == pa : " << (pb == pa) << std::endl;
    std::cout << "pb == pa : " << (pb+1 == pa+1) << std::endl;
    std::cout << "*(pa+1)=" << *(pa+1) << std::endl;
    std::cout << "*(pa+2)=" << *(pa+2) << std::endl;
    pb=&a1;
    std::cout << "pb - pa : " << (pb - pa) << std::endl;
    return 0;
}