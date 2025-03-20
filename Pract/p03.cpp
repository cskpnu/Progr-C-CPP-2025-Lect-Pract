#include "iostream";

int main(){
    int n=25;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++){
        std::cout << "Enter a[" << i << "] = ";
        std::cin  >> a[i];
        std::cout << "Enter b[" << i << "] = ";
        std::cin >> b[i];

    }

    for (int i = 0; i < n; i++){
       if(a[i] < 0){
           b[i]*=10;
       } else {
              b[i] = 0;
       };
       std::cout << b[i] << " ";
    }
    return 0;
}
