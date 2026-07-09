#ifndef IS_DIVISIBLE_BY_PRIMES___H
#include <cstddef>

#include <string_view>

// This function checks if a given number is divisible by all
// the number in the given string of primes
bool isDivisibleByPrimes(std::size_t num, std::string_view strOfKnownPrimes);

#endif // IS_DIVISIBLE_BY_PRIMES___H
