#include "printText.h"
#include "getBallPosition.h"
#include <iostream>

void printText(double towerHeight)
{
    // I'm manually iterating the seconds value
    // since we haven't touched loops yet :)
    double ballPosition { getBallPosition(towerHeight, 0) }; // seconds = 0

    if (ballPosition  < 0)
        return;
    if (ballPosition  > 0)
        std::cout << "At 0 seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At 0 seconds, the ball is at height on the ground\n";


    ballPosition = getBallPosition(towerHeight, 1); // seconds = 1
    if (ballPosition  < 0)
        return;
    if (ballPosition  > 0)
        std::cout << "At 1 seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At 1 seconds, the ball is at height on the ground\n";


    ballPosition = getBallPosition(towerHeight, 2); // seconds = 2
    if (ballPosition  < 0)
        return;
    if (ballPosition  > 0)
        std::cout << "At 2 seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At 2 seconds, the ball is at height on the ground\n";


    ballPosition = getBallPosition(towerHeight, 3); // seconds = 3
    if (ballPosition  < 0)
        return;
    if (ballPosition  > 0)
        std::cout << "At 3 seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At 3 seconds, the ball is at height on the ground\n";


    ballPosition = getBallPosition(towerHeight, 4); // seconds = 4
    if (ballPosition  < 0)
        return;
    if (ballPosition  > 0)
        std::cout << "At 4 seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At 4 seconds, the ball is at height on the ground\n";


    ballPosition = getBallPosition(towerHeight, 5); // seconds = 5
    if (ballPosition  < 0)
        return;
    if (ballPosition  > 0)
        std::cout << "At 5 seconds, the ball is at height: " << ballPosition << '\n';
    else if (ballPosition == 0)
        std::cout << "At 5 seconds, the ball is at height on the ground\n";




}
