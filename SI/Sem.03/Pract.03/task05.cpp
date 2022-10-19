#include <iostream>

int main() {
    int number;
    do {
        std::cout << "Enter number: ";
        std::cin >> number;
    } while(! (number >= 0 && number <= 100));
    int prediction, tries = 0;
    do {
        std::cout << "Enter prediction: ";
        std::cin >> prediction;
        if(prediction < number) {
            std::cout << "It is bigger!" << std::endl;
        } else if(prediction > number) {
            std::cout << "It is smaller!" << std::endl;
        }
        else {
            std::cout << "Guessed it!" << std::endl;
        }
        tries++;
    } while(prediction != number);
    std::cout << "Tries: " << tries << std::endl;
    return 0;
}