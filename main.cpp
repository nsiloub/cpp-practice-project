#include <iostream>

void printCharsBeforeCurrNum(int innerNum, int currentNum, int finalNum)
{
    int totalSpaces { finalNum - currentNum };
    while (totalSpaces > 0)
    {
        if (currentNum == innerNum) // To add the spaces only before the leading number (currentNum)
            std::cout << "  ";
        --totalSpaces;
    }
}

int main()
{
    constexpr int finalNum { 5 }; // the number being processed
    int currentNum { 1 }; // the maximum number on the current horizontal iteration

    while (currentNum <= finalNum)
    {
        int innerNum { currentNum }; // the iterating horizontal number (individual)
        while (innerNum >= 1)
        {

            printCharsBeforeCurrNum(innerNum, currentNum, finalNum); // returned spaces

            if (currentNum != innerNum) // to remove the preceding  space for the first number, after the returned spaces
                std::cout << ' ';
            std::cout << innerNum;

            --innerNum;
        }

        std::cout << '\n';
        ++currentNum;
    }

    return 0;
}
