#include <iostream>
#include <cmath>

int main () {
    double temp;
    char unit;

    std::cout << "*************** temp converter ******************" << '\n';
    std::cout << "enter unit ";
    std::cin >> unit;


    if(unit == 'f' || unit == 'F') {
         std::cout << "enter temperature ";
         std::cin >> temp;
         std::cout << "your temp in celsius is " << (temp - 32) * 5/9;
    }else if (unit == 'c' || unit == 'C') {
         std::cout << "enter temperature ";
         std::cin >> temp;
         std::cout << "your temp in farenhheit is " << (temp * 9/5) + 32;
    } else {
        std::cout << "ENTER A VALID UNIT";
    }

    return 0;
}