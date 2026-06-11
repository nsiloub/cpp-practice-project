#include "getBallPosition.h"
#include "printText.h"
#include <iostream>

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight {};
    std::cin >> towerHeight;

    printText(towerHeight, 0);
    printText(towerHeight, 1);
    printText(towerHeight, 2);
    printText(towerHeight, 3);
    printText(towerHeight, 4);
    printText(towerHeight, 5);

    return 0;
}
