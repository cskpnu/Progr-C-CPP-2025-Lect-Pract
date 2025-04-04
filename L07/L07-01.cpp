//Обчислення середнього значення двох математичних функцій
#include <iostream>
#include <cmath>
#define K 100
double fun1(double);/* прототипи функцій */
double fun2(double);
double AverFunValue(double, double, double(*)(double));
int main(void)
{
    //setlocale(LC_ALL, "ukr");
    double a, b;/* межі проміжку */
    std::cout <<"\nінтервал => ";
    std::cin >> a >> b;
    std::cout << "\nСереднє значення функції_1 => ";
    AverFunValue(a, b, fun1);
    std::cout << "\nСереднє значення функції_1 => ", AverFunValue(a, b, fun2);
    return 0;
}
/* функція, що визначає середнє значення математичної функції,
заданої вказівником pf, на інтервалі аналізу [х0,хк]*/
double AverFunValue(double x0, double xk, double(*pf)(double))
{
    double x, dx, fsum = 0;
    dx = (xk - x0) / (K - 1);
    for (x = x0, xk += dx / 10; x < xk; x += dx)
        fsum += (*pf)(x);
    return fsum / K;
}
double fun1(double x)/* перша математична функція */
{
    return sin(2 * x) - 0.85 * cos(x + 1.4);
}
double fun2(double x)/* друга математична функція */
{
    if (x >= 0)
        return 3 * cos(1.5 * x);
    else
        return cos(x) * cos(x);
}

