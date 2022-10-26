#include <iostream>

bool isSorted(int number) {
    bool asc = true, desc = true;
    int prevDigit = number % 10;
    do {
        number /= 10;
        if(asc && prevDigit < number % 10) {
            asc = false;
        }
        if(desc && prevDigit > number % 10) {
            desc = false;
        }
        prevDigit = number % 10;
    } while(number > 9);
    return asc || desc;
}

int main() {
    int number;
    std::cin >> number;
    if(number < 0) {
        std::cout << "Invalid input";
        return 1;
    }
    std::cout << (isSorted(number) ? "true" : "false") << std::endl;
    return 0;
}