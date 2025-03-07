#include "iostream";

int main(){
    // s=1+2+3+..+n
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    std::cout << "sum = " << sum << std::endl;

    // d=(1+1)*(1+2)*(1+3)*...*(1+m)
    int m;
    std::cin >> m;
    int d = 1;
    for (int i = 1; i <= m; i++){
        d *= 1+i;
    }
    std::cout << "d = " << d << std::endl;
    return 0;
}