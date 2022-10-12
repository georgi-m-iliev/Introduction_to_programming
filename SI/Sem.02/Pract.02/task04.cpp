#include <iostream>

int main() {
    std::cout << "Result: ";
    int markPercentage;
    int markScaled;
    std::cin >> markPercentage;
    if(markPercentage >= 90) {
        std::cout << "Grade: 6+" << std::endl;
    }
    else if(markPercentage >= 80) {
        std::cout << "Grade: 6" << std::endl;
    }
    else if(markPercentage >= 70) {
        std::cout << "Grade: 5" << std::endl;
    }
    else if(markPercentage >= 60) {
        std::cout << "Grade: 4" << std::endl;
    }
    else if(markPercentage >= 40) {
        std::cout << "Grade: 3" << std::endl;
    }
    else {
        std::cout << "Grade: 2" << std::endl;
    }
    return 0;
}
