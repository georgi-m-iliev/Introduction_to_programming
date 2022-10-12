#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << ((a > b) ? "The first number is bigger!" : "The second number is bigger!") << std::endl;
    return 0;
}
