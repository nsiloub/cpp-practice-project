#include "sumTo.h"

int sumTo(int value)
{
    int accumulator { };

    for (int i { 0 }; i <= value; ++i)
    {
        accumulator += i;
    }

    return accumulator;
}
