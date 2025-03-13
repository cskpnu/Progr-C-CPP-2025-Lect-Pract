#include <iostream>

int main() {
    double sum1 = 0;
    for (int i = 1; i <= 10; i++)
    {
        double sum2 = 0;
        for (int j = 1; j <=20; j++) {
            sum2 += (j+i)*(j+i);
        }
        sum1 += sum2*i;
    }
    std::cout<<sum1<<std::endl;
}