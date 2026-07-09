#include "Constants.h"
#include <string>
#include <cstddef>

namespace Constants
{
    std::size_t numLength(size_t num)
    {
        return ( std::to_string(num).length());
    }
}
