#include "Constants.h"
#include "isDivisibleByPrimes.h"
#include "normalizePrimeToNum.h"

#include <string>
#include <string_view>
#include <cstddef>

#include <iostream> // TEMPORARY, TO REMOVE

std::size_t lastPrimeInStr(std::string strOfPrimes, size_t num)
{
    std::size_t numLength { Constants::numLength(num) };
    std::size_t stringLength { strOfPrimes.length() };
    return static_cast<std::size_t>(std::stoi( strOfPrimes.substr( (stringLength - numLength), numLength) ) );
}

bool isComposite(std::size_t num)
{
    size_t castedNum { static_cast<size_t>(num)};

    std::string normalizedInitialPrime {normalizePrimeToNum( (Constants::initialPrime), num)};
    std::string generatedPrimeStr { normalizedInitialPrime };

//    generatedPrimeStr += ", " + normalizePrimeToNum(3, num); // TEMPORARY

    std::cout << "generatedPrimeStr = \""<< generatedPrimeStr << "\"\n\n";

    std::size_t lastPrime { lastPrimeInStr(generatedPrimeStr, num) };

    std::cout << "Last prime in string is: " << lastPrime << '\n';


    if (!isDivisibleByPrimes(num, generatedPrimeStr))
    {
        while ( ((lastPrime * lastPrime) <= castedNum ) && lastPrime != castedNum )
        {
            std::size_t nextPrime { lastPrime };

            if (nextPrime * nextPrime == castedNum)
                return true; // Is composite
            else
                while (isDivisibleByPrimes(nextPrime, generatedPrimeStr))
            {
                ++nextPrime;
                if (castedNum % nextPrime == 0)
                    return true; // is Composite
            }
            generatedPrimeStr += ", " + normalizePrimeToNum(nextPrime, num);
        }

        return false; // TEMPORARY
    }

    return true; //TEMPORARY
}

