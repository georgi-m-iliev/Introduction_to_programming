#include <iostream>

int reverse(int number) {
    int result = 0;
    do {
        result *= 10;
        result += number % 10;
        number /= 10;
    } while(number != 0);
    return result;
}

int main() {
    int number;
    std::cin >> number;
    if(number < 0) {
        std::cout << "Incorrect input" << std::endl;
        return 1;
    }
    std::cout << reverse(number) << std::endl;
    return 0;
}
