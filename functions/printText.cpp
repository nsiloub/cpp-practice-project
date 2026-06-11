#include "printText.h"
#include "getBallPosition.h"
#include <iostream>



void printText(double towerHeight, int seconds)
{
    double ballPosition { getBallPosition(towerHeight, seconds) };

    if (ballPosition  > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At " << seconds << " seconds, the ball is on the ground\n";

}
