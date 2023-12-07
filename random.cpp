#include <iostream>
#include <cmath>

int main () {
    srand(time(0));


    int guess;
    int tries = 0;
    int randNum = (rand() % 10) + 1;

    // switch(randNum) {
    //     case 1:
    //         std::cout << "You win a gift card!";
    //         break;
    //     case 2:
    //         std::cout << "You win a trip to disney world";
    //         break;
    //     case 3:
    //         std::cout << "You win a plane ticket to france";
    //         break;
    //     default:
    //         std::cout << "ABOVE 3";
    //         break;
    // }

    do {
        std::cout << "guess the number";
        std::cin >> guess;
        tries++;

        if (guess == randNum) {
            std::cout << "you guessed correctly after " << tries << " tries";
        } else if (guess > randNum) {
            std::cout << "HIGH";
        } else if (guess < randNum) {
            std::cout << "LOW";
        } else {
            std::cout << "Enter valid guess";
        }
    } while (guess != randNum);


    return 0;
}