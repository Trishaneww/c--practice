#include <iostream>


int main () {
    std::string name;
    std::cout << "Enter your name";
    std::getline(std::cin, name);

    if(name.empty()) {
        std::cout << "Your didnt enter your name";
    } else {
        std::cout << "Hello " << name.append("@gmail.com");
    }

    return 0;
}