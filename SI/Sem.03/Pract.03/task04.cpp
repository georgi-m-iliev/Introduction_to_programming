#include <iostream>

int main() {
    unsigned int m = 0, n = 0;
    std::cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << ((i * n) + (j + 1)) << " ";
        }
        std:: cout << std::endl;
    }
    return 0;
}