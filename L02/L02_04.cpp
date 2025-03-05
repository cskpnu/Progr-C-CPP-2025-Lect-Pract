#include "iostream"

int main(){

    int n;
    std::cin >> n;
    for (int i = 2; i <= 2*n; ) {
        i=i+1;
        if (i%2)
            continue;

        std::cout << i << " ";

    }
    return 0;
    std::cout << std::endl;
    int i = 2;
    while (i<=2*n){
        std::cout << i << " ";
        i=i+2;
    }
    std::cout << std::endl;
    i=2;
    do {
        std::cout << i << " ";
        i=i+2;
    } while (i<=2*n);


}