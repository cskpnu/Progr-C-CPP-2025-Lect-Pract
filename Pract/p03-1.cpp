#include "iostream";
#include "cmath";

int main() {
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {

        std::cin >> a[i];
    }
    int count = n;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                count--;
                break;
            }
        }
    }
        std::cout << "count = " << count << std::endl;

        return 0;
}