#include "getDistanceFallen.h"
#include "getBallPosition.h"

double getBallPosition(double towerHeight, double seconds)
{
    return ( towerHeight - getDistanceFallen(seconds) );
}
