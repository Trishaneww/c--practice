#include <iostream>
#include <cmath>

// int main() {
//     // standard character output
//     // std::cout << "I like pizza!" << std::endl;
//     // std::cout << "Its really good" << std::endl;
//     // std::cout << "END OF LINE" << std::endl;
//     // std::cout << 1+2 << std::endl;

//     int x = 5; //declaration
//     int y = 2;
//     int sum = x + y;

//     // double refers to decimal numbers
//     double price = 10.99;

//     // char refers to single character
//     char grade = 'A';

//     // boolean
//     bool student = false;

//     //string (objects that represents a sequence of text)
//     std::string name = "Trishane";

//     std::cout << x << '\n';
//     std::cout << y << '\n';
//     std::cout << sum << '\n';
//     std::cout << price;
//     std::cout << grade;
//     std::cout << student;
//     std::cout << "hello " << name;

//     return 0;
// }

// typedef = reserved keyword used to create an additional name (alias) for another data type. New idtntifier for an existing type helps with readability and reduces typos
// #include <vector>

typedef std::string text_t;
// typedef int number_t;
// using text_t = std::string;

namespace first
{
    int x = 4;
}

namespace second
{
    int x = 3;
}

// int main() {
//     using namespace second;
//     text_t firstName = "Trishane";
//     std::string name;
//     int age;

//     std::cout << "whats your name: ";
//     std::getline(std::cin >> std::ws, name);

//     std::cout << "Whats your age: ";
//     std::cin >> age;

//     std::cout << "HELLO " << name << " you are " << age << " old";

//     return 0;
// }

// int main () {

//     double a;
//     double b;
//     double c;

//     std::cout << "Enter Side a: ";
//     std::cin >> a;

//     std::cout << "Enter side b: ";
//     std::cin >> b;

//     c = sqrt(pow(a, 2) + pow(b, 2));

//     std::cout << "Hypotnenuse is " << c;

//     return 0;
// }

int main()
{

    int month;
    bool hungry = true;
    std::cout << (hungry ? "youre hungry" : "youre full");
    std::cout << "Enter month 1-12: ";
    std::cin >> month;

    
    switch (month) {
    case 1:
        std::cout << "It is jan";
        break;
    case 2:
        std::cout << "It is feb";
        break;
    case 3:
        std::cout << "It is march";
        break;
    default:
        std::cout << "enter a valid month value";
        break;
    }
}