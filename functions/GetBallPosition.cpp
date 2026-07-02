#include "GetBallPosition.h"
#include "Constants.h"

double getBallPosition(int seconds, double towerHeight)
{
    const double distanceFallen { (Constants::gravity * (seconds * seconds)) / 2 };

    return towerHeight - distanceFallen;
}

