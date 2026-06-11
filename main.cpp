#include "getBallPosition.h"
#include "printText.h"
#include <iostream>

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight {};
    std::cin >> towerHeight;

    printText(towerHeight);

    return 0;
}
