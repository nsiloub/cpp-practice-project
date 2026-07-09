#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <cstddef>

namespace Constants
{
    // for initializing the string of primes, for case where num > 2
    constexpr int initialPrime { 2 };


    // number of digits for comma "," and space " " in the string of primes
    constexpr int nbrOfSepChars { 2 }; // number of separator characters

    //this function returns the number of digits a given number has
    std::size_t numLength(std::size_t num);
}

#endif // CONSTANTS_H
