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

bool isPalindrome(int number) {
    std::cout << number << " " << reverse(number) << std::endl;
    return number == reverse(number);
}

int main() {
    int number;
    std::cin >> number;
    if(number < 0) {
        std::cout << "Incorrect input" << std::endl;
        return 1;
    }
    std::cout << (isPalindrome(number) ? "true" : "false") << std::endl;
    return 0;
}