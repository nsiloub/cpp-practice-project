#include "normalizePrimeToNum.h"
#include <string>
#include "Constants.h"
#include <cstddef>

#include <iostream> //TEMPORARY, TO REMOVE

std::string normalizePrimeToNum(size_t prime, size_t num)
{
    size_t numLength { Constants::numLength(num) };
    std::string primeToStr { std::to_string(prime) }; //converts a prime into a string

    while (primeToStr.length() != numLength)
    {
        primeToStr = "0" + primeToStr; // adds zero to that prime, until it matches the number of digits of Num
    }

    std::cout << "in normalizePrimeToNum, numLength is: " << numLength << "; " << "primeToStr.length() is: " << primeToStr.length() << '\n';
    std::cout << "primeToStr: " << primeToStr << "\n";

    return primeToStr;
}


