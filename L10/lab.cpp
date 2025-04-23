/* Другий програмний файл */
#include "funchdr.h"
#include <iostream>
extern OFDATA arr[];/*посилання на зовнішній масив*/
extern int nd;/*посилання на зовнішню змінну*/
static int k;/*змінна другого файла */
void PrintData(OFDATA* ptr)
{
    if (ptr < arr + nd)
        puts(ptr->name);
    k++;
}
void InputData(void)
{
    std::cout << "Введіть кількість елементів масиву:";
    std::cin >> nd;
    for (int i=0; i < nd; i++) {
        std::cin >> arr[i].name;
    }
    k++;
}
/* описи інших функцій */

