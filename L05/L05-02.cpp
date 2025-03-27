#include <iostream>

int main() {
    char langs[][20]{"C++", "Python", "JavaScript"};
    for (auto lang: langs) {
        std::cout << lang << std::endl;
    }
    return 0;
}