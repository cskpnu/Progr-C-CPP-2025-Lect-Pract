#include "iostream";

int main() {
    int num, bak; 		/* звичайні змінні */
    const int cnst = 80; 	/* константна змінна */
    const int *ptc;		/* вказівник на константну змінну */
    ptc = &cnst; 		/* nравильно */
    ptc = &num; ptc = &bak;	/* правильно */
    printf("Обсяг - %d\n", *ptc); /* правильно */
    if (*ptc != 100) 		/* правильно */
        *ptc = 100; 		/* ! помилка */
    int *pt; 		/* звичайний вказівник */
    pt = &cnst; 		/* ! помилка */
    pt = &num; pt = &bak;	/* nравильно */


    return 0;
}
