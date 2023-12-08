#include <iostream>
#include <cmath>

void showChoice(char choice) {
    switch(choice) {
        case 'r':
            std::cout << "rock ";
            break;
        case 'p':
            std::cout << "paper ";
            break;
        case 's':
            std::cout << "scissors ";
            break;
        default:
            break;
    }
}

char getPlayerChoice()
{
    char choice;
    std::cout << "Rock, paper, scissors ";
    std::cin >> choice;
    return choice;
}

char getCpuChoice() {
    int num = (rand() % 3) + 1;
    switch (num) {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

int main()
{
    int cpuScore = 0;
    int playerScore = 0;
    do
    {
        char cpu = getCpuChoice();
        char player = getPlayerChoice();
        std::cout << "YOU CHOSE: ";
        showChoice(player);
        std::cout << "CPU CHOSE: ";
        showChoice(cpu);
        if (cpu == player)
        {
            std::cout << "its a TIE!!";
        }
        else if (player == 'r')
        {
            if (cpu == 'p')
            {
                cpuScore++;
                std::cout << "cpu won " << cpuScore;
            }
            else if (cpu == 's')
            {
                playerScore++;
                std::cout << "you won " << playerScore;
            };
        }
        else if (player == 's')
        {
            if (cpu == 'p')
            {
                playerScore++;
                std::cout << "you won " << playerScore;
            }
            else if (cpu == 'r')
            {
                cpuScore++;
                std::cout << "cpu won " << cpuScore;
            };
        }
        else if (player == 'p')
        {
            if (cpu == 'r')
            {
                playerScore++;
                std::cout << "you won " << playerScore;
            }
            else if (cpu == 's')
            {
                cpuScore++;
                std::cout << "cpu won " << cpuScore;
            };
        }
        else
        {
            std::cout << "invalid input";
        }
        
    } while (playerScore < 3 || cpuScore < 3);

    return 0;
}


// void showWinner(char cpu, char player) {
//     if (cpu == player)
//         {
//             std::cout << 'its a TIE!!';
//         }
//         else if (player == 'r')
//         {
//             if (cpu == 'p')
//             {
//                 cpuScore++;
//                 std::cout << 'cpu won ' << cpuScore;
//             }
//             else if (cpu == 's')
//             {
//                 playerScore++;
//                 std::cout << 'you won ' << playerScore;
//             };
//         }
//         else if (player == 's')
//         {
//             if (cpu == 'p')
//             {
//                 playerScore++;
//                 std::cout << 'you won ' << playerScore;
//             }
//             else if (cpu == 'r')
//             {
//                 cpuScore++;
//                 std::cout << 'cpu won ' << cpuScore;
//             };
//         }
//         else if (player == 'p')
//         {
//             if (cpu == 'r')
//             {
//                 playerScore++;
//                 std::cout << 'you won ' << playerScore;
//             }
//             else if (cpu == 's')
//             {
//                 cpuScore++;
//                 std::cout << 'cpu won ' << cpuScore;
//             };
//         }
//         else
//         {
//             std::cout << 'invalid input';
//         }
// }