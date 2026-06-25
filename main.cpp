#include "sumTo.h"
#include <iostream>

int sumTo(int value);

std::string expandWithPlus(int value);

int main()
{
    std::cout << "Enter an integer: ";
    int value {};
    std::cin >> value;

    std::cout << "The sum to " << value << " is " << sumTo(value) << '\n';
    std::cout << "Which is: [ "<< expandWithPlus(value) << " ]\n";

    return 0;
}
