#include <iostream>

int main() {

    // fill() = fills a range of elements with a specified value 
    // fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    for(std::string food : foods) {
        std::cout << food << '\n';
    }

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;


    for (int i =0; i < size; i++) {
        std::cout << "please enter a food or 'q' to quit" << i + 1;
        std::getline(std::cin, temp);

        if(temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }


    return 0;
}