#include <iostream>

int main() {
    char letter;
    std::cin >> letter;
    if(letter >= 65 && letter <= 90) {
        std::cout << (char)(letter + 32) << std::endl;
    }
    else if(letter >= 97 && letter <= 122) {
        std::cout << (char)(letter - 32) << std::endl;
    }
    else {
        std::cout << "Invalid character" << std::endl;
    }
    return 0;
}