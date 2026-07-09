#include "Constants.h"
#include "isComposite.h"
#include <iostream>
#include <cassert>
#include <cstddef>

// -Wconversion -Wsign-conversion -Werror


bool isComposite(int num);

bool isPrime(int num)
{
    if (num <= Constants::initialPrime )
        return ((num == Constants::initialPrime) ? true: false);
    else if (num % Constants::initialPrime == 0)
        return false;
    else
    {
        std::size_t castedNum { static_cast<std::size_t>(num)};
        std::cout << "FUNCTION IN PROGRESS: ";
        isComposite(castedNum);
        return true;
    }
}



int main()
{
    isPrime(15);

//    assert(!isPrime(0));
//    assert(!isPrime(1));
//    assert(isPrime(2));
//    assert(isPrime(3));
//    assert(!isPrime(4));
//    assert(isPrime(5));
//    assert(isPrime(7));
//    assert(!isPrime(9));
//    assert(isPrime(11));
//    assert(isPrime(13));
//    assert(!isPrime(15));
//    assert(!isPrime(16));
//    assert(isPrime(17));
//    assert(isPrime(19));
//    assert(isPrime(97));
//    assert(!isPrime(99));
//    assert(isPrime(13417));

//    std::cout << "Success!\n";

}
