#include <iostream>

int main () {
    int rows;
    int columns;

    std::cout << "please enter rows?: ";
    std::cin >> rows;
    std::cout << "please enter columns?: ";
    std::cin >> columns;

    for (int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            std::cout << "&";
        }
        std::cout << "\n";
    }
    return 0;
}