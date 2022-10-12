#include <iostream>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    if((a+b) > c && (b+c) > a && (a+c) >> b) {
        std::cout << "Valid triangle!" << std::endl;
    }
    else {
        std::cout << "Not a valid triangle!" << std::endl;
    }
    return 0;
}