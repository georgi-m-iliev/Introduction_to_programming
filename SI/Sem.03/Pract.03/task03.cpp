#include <iostream>

int main() {
    unsigned int number = 0;
    std::cin >> number;
    unsigned int square = number * number;
    do {
        if(square % 10 != 0) {
            std::cout << square % 10;
        }
        square /= 10;
    } while(square != 0);
    return 0;
}