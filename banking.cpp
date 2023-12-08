#include <iostream>


void showBalance(int balance)
{
    std::cout << "your balance is $" << balance;
}

double withdraw() {
    int amount;
    std::cout << "How much would you like to widthdraw";
    std::cin >> amount;
    std::cout << "Succesfully withdrew $" << amount;
    return amount;
}

double deposit()
{
    int amount;
    std::cout << "how much would you like to deposit?";
    std::cin >> amount;
    std::cout << "Succesfully despoited $" << amount;
    return amount;
}

int main()
{
    double balance = 200;
    int choice = 0;

    do
    {
        std::cout << "************** PLEASE ENTER A CHOICE\n ***************";
        std::cout << "1. show balance\n";
        std::cout << "2. deposit money\n";
        std::cout << "3. widthdraw money\n";
        std::cout << "4. exit\n";
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw();
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting";
            break;
        default:
            std::cout << "invalid input\n";
        }
    } while (choice != 4);
}
