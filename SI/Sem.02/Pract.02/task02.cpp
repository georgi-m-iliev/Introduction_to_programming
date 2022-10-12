#include <iostream>

int main() {
    char c;
    std::cin >> c;
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        std::cout << "It is latin!" << std::endl;
        switch(c) {
            case 'a':
            case 'e':
            case 'u':
            case 'o':
            case 'i':
                std::cout << "It is a vowel!" << std::endl;
                break;
            default:
                std::cout << "Not a vowel!" << std::endl;
        }
    }
    else {
        std::cout << "It is not latin!" << std::endl;
    }
    return 0;
}