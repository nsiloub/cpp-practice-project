#include "getDistanceFallen.h"
#include "getBallPosition.h"

double getBallPosition(double towerHeight, int seconds)
{
    if ( (towerHeight - getDistanceFallen(seconds)) < 0 )
        return 0.0;
    return ( towerHeight - getDistanceFallen(seconds) );
}
