#include <iostream>
#include "string"
#define KST 25
using namespace std;
int main()
{
    struct student {/* шаблон структури */
        string name;
        string grup;
        long number;
        double rating;
    } starr[KST], stud, * pst, * pstl, * pst2;   /* структурні змінні */
    int k, kst;     double inrating;
    cout << "Кількість студентів - ";
    cin >> kst;
    cout << "\tДaнi: ";
    for (k = 0; k < kst; k++) {
        cout << "\n" << k+1 << " Прізвище, ім\'я: ";
        cin.ignore(1000, '\n');
        getline(cin, starr[k].name);
        cout << "група: ";
        getline(cin,(starr + k)->grup);
        cout << "номер студентського квитка: ";
        std::cin >> starr[k].number;
        std::cout << "середній бал: ";
        std::cin >> inrating;
        (starr + k)->rating = inrating;
    }
    for (k = 0; k < kst; k++) {/* цикл сортування */
        pstl = starr;
        pst2 = starr + 1;
        for (; pst2 < starr + kst - k; pstl++, pst2++)
            if (pstl->rating < pst2->rating) {/* якщо сусідні струк- */
                stud = *pstl;                /* тури не впорядковані, */
                *pstl = *pst2;                /* то міняємо їх місцями */
                *pst2 = stud;
            }
    }
    cout << "\n\t Список студентів: \n";
    for (k = 0, pst = starr; k < kst; k++, pst++)
        cout << k + 1 << "\t" << pst->name << "\t" << pst->grup << "\t" << pst->number << "\t" << pst->rating << "\n";
    return 0;
}