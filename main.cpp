#include <iostream>

int getValue()
{
    int val {};
    std::cin >> val;
    return val;
}

void printTwoLines(const int firstInt, const int largerInt)
{
    std::cout << "The smaller value is " << firstInt << " \n";
    std::cout << "The larger value is " << largerInt << " \n";

}

void printFinalText(const int firstInt, const int largerInt)
{
    if ( !(largerInt > firstInt) )
    {
        std::cout << "Swapping the values\n";
        int smaller {largerInt};
        int larger {firstInt};
        printTwoLines(smaller, larger);
    } // smaller and larger die here
    else
        printTwoLines(firstInt, largerInt);
}

int main()
{
    std::cout << "Enter an integer: ";
    const int firstInt { getValue() };

    std::cout << "Enter a larger integer: ";
    const int largerInt { getValue() };

    printFinalText(firstInt, largerInt);

    return 0;
}
