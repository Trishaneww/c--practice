#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    std::string students[] = {"john", "mark", "justin"};
    int grades[] = {65, 77, 81, 92};
    // std::cout << sizeof(students)/sizeof(std::string);

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }

    for(int grade : grades) {
        std::cout << grade << '\n';
    }

    //passing a array into a function decays into a pointer
    double prices[] = {10.00, 20.00, 15.50, 2.20};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "total is: $" << total;

        return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i ++) {
        total += prices[i];
    }
    return total;
}