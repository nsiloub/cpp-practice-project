#include "expandWithPlus.h"

std::string expandWithPlus(int value)
{
    std::string str { "" };
    for (int i { 0 }; i < value; ++i)
    {
        if ( i >= 1 && i < (value))
            str += (std::to_string(i) + " + " );
    }

    str += std::to_string(value);

    return str;
}
