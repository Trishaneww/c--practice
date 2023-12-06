#include <iostream>
#include <cmath>

int main () {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR *************" << '\n';

    std::cout << "enter an operator ";
    std::cin >> op;
    std::cout << "Enter num1 ";
    std::cin >> num1;
    std::cout << "enter num2 ";
    std::cin >> num2;

    switch (op) {
        case '+':
            std::cout << num1 + num2 << '\n';
            break;
        case '-':
            std::cout << num1 - num2 << '\n';
            break;
        case '*':
            std::cout << num1 * num2 << '\n';
            break;
        case '/':
            std::cout << num1/num2 << '\n';
            break;
        default:
         std::cout << "Please enter a proper value";
    }

    std::cout << "*************************************";
}