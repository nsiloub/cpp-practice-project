#include "isDivisibleByPrimes.h"
#include "Constants.h"
#include <string_view>
#include <string>
#include <cstddef>

#include <iostream> // TEMPORARY, TO REMOVE
//
//int countCommas(std::string_view strOfKnownPrimes, int num)
//{
//
//    int count { 0 };
//
//    // size_t since this is the type substr() takes, and to avoid type overflows
//    for (size_t i { 0 }; i <= strOfKnownPrimes.length() - 1; ++i) // indexes are = length - 1;
//    {
//        if (strOfKnownPrimes.substr(i, 1) == ",")
//        {
//            ++count;
//
//
//        }
//    }
//    return count;
//}
//
    //use std::stoi(string substring) to convert a string to an integer
//    std::cout <<"num is: " << num << ' ' << "String of primes is: " << strOfKnownPrimes << '\n';


bool isDivisibleByPrimes(std::size_t num, std::string_view strOfKnownPrimes)
{
    bool isDivisibleByOnePrime { false };
    // 1)   Loop through strOfKnownPrimes
    // 2)   For each prime, as soon as a num % prime != 0
            // return true
            // otherwise, return false


//    int separatorIndicatorCount { 0 };  // We'll use the comma (,)
//    constexpr int nbrOfSepChars { Constants::nbrOfSepChars };

    std::string strOfPrimes { strOfKnownPrimes }; // compiler complaining about string_view
    size_t numLength { Constants::numLength(num) };

    std::cout << "Prime numbers are: ";
    std::cout << '\t' << std::stoi(strOfPrimes.substr(0, numLength)) << '\n';

    for (size_t i { 0 }; i <= (strOfKnownPrimes.length() - 1); ++i)
    {
        if (strOfKnownPrimes.substr(i, 1) == "," || i == (strOfKnownPrimes.length() - 1))
        {
            size_t primeEndPosition { i };
            size_t primeStartPosition { i - numLength };

            int currentPrime { std::stoi(strOfPrimes.substr(primeStartPosition, primeEndPosition)) };

                std::cout << '\t' << currentPrime << '\n';



            if (static_cast<size_t>(num) % static_cast<size_t>(currentPrime) == 0)
            {
                std::cout << (num) << " / " << (i) << " = " << ( static_cast<size_t>(num) / i ) << '\n';

                std::cout << "Yes, is divisible by one prime at least \n";
                return true; // is divisible by one prime atleast
            }

        }
    }
    std::cout << "No, is not divisible by any prime \n";

    return  isDivisibleByOnePrime;// temporary
}

