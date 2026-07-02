#include "PrintBallPosition.h"
#include <iostream>

double getTowerHeight()
{
    double towerHeight {};

    while (towerHeight <= 0.0)
    {
        std::cout << "Enter the height ( > 0.0 ) of the tower in meters: ";
        std::cin >> towerHeight;
    }
    return towerHeight;
}


int main()
{
    double towerHeight { getTowerHeight() };

    printBallPosition(towerHeight);

    return 0;
}
