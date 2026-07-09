#ifndef NORMALIZE_PRIME_TO_NUM___H
#define NORMALIZE_PRIME_TO_NUM___H

#include <cstddef>

#include <string>

// this function is for adding zero before the prime if necessary
// in order to match the number of digits of the given number
// this is to make it easier to manipulate the string of primes
std::string normalizePrimeToNum(std::size_t prime, std::size_t num);

#endif // NORMALIZE_PRIME_TO_NUM___H
