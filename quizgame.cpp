#include <iostream>

int main () {
    std::string questions[] = {"1. Is the earth flat",
                               "2. Who created rust",
                               "3. Who created c++",
                               "4. Who created python"};

    std::string options[][4] = {{"A", "B", "C", "D"}, {"A", "B", "C", "D"}, {"A", "B", "C", "D"}, {"A", "B", "C", "D"}};

    char answerKey[] = {'C', 'B', 'A', 'D'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;



    for (int i = 0; i < size; i++) {
        std::cout << "*****************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*****************************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << "\n";
        }

        std::cout << "choose your answer: ";
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            score++;
            std::cout << "correct\n";
        } else {
            std::cout << "wrong\n";
            std::cout << "The correct answer was: " << answerKey[i] << "\n";
        }
    }



    std::cout << "*****************************\n";
    std::cout << "Your score is: " << score << '\n';
    std::cout << "*****************************\n";

    return 0;
}