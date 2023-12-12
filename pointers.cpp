#include <iostream>

int main() {

    std::string name = "twizz";
    std::string *pName = &name;
    std::cout << *pName;

    return 0;
}