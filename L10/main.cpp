/* Приклад багатофайлової програми */
#include <iostream>
#include "funchdr.h"
#define NMAX 150
OFDATA arr[NMAX];/* глобальний масив */
int nd;/* глобальна змінна */
static int k;/* частково глобальна змінна */
int main(void)
{
    InputData();
    while (k < nd)
        DoFunction();
    return 0;
}
void DoFunction(void)
{
    PrintData(arr+k);
    k++;
}

