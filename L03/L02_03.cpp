#include "iostream"

int main(){
    int a;
    std::cin >> a;
    switch (a) {
        case 1: std::cout << "Понеділок"; break;
        case 2: std::cout << "Вівторок"; break;
        case 3: std::cout << "Середа"; break;
        case 4: std::cout << "Четвер"; break;
        case 5: std::cout << "П'ятниця"; break;
        case 6: std::cout << "Субота"; break;
        case 7: std::cout << "Неділя"; break;
        default: std::cout << "Невірний день тижня"; break;
    }

    return 0;
}