#include <iostream>

int main() {

    // memory address = a location in memory where data is stored
    // a memory ddress can be ccessed with & (address-of operator)

    // const parameter = parameter this si effectiely read-only
    //                   code is more secure and convey intent
    //                   useful for references and pointers

    std::string name= "BRO";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &student << '\n';
    std::cout << &age << '\n';

}