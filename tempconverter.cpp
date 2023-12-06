#include <iostream>
#include <cmath>

int main () {

    double temp;
    char unit;

    std::cout << "*************** temp converter ******************" << '\n';
    std::cout << "enter temperature ";
    std::cin >> temp;
    std::cout << "enter unit ";
    std::cin >> unit;

    switch(unit) {
        case 'c':
            std::cout << "your temp in farenhheit is " << (temp * 9/5) + 32;
            break;
        case 'f':
            std::cout << "your temp in celsius is " << (temp - 32) * 5/9;
            break;
        default:
            std::cout << "enter a valud unit";
            break;
    }


    return 0;
}