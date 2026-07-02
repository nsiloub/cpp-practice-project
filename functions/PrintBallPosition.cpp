#include "PrintBallPosition.h"
#include "GetBallPosition.h"
#include <iostream>

void printBallPosition(double towerHeight)
{
    for (int seconds {0}; seconds >= 0; ++seconds) //intentional infinite loop
    {
        double ballPosition = getBallPosition(seconds, towerHeight);
        if (ballPosition <= 0)
        {
            std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
            break; // We exit as soon as the ball position is <= 0
        }
        else
            std::cout << "At " << seconds << " seconds, the ball is at height: " << ballPosition << " meters\n";

    }

}
