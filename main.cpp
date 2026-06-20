#include <iostream>

int accumulate(int x) // Bad function: Impure (inconsistent outputs), but this is what they want
{
    static int lastValue { 0 }; // non-const variable: Bad but, this is what they want
    lastValue += x;
    return lastValue;
}

int main()
{
    std::cout << accumulate(20) << '\n';
    std::cout << accumulate(18) << '\n';
    std::cout << accumulate(16) << '\n';
    std::cout << accumulate(14) << '\n';
    std::cout << accumulate(12) << '\n';
    std::cout << accumulate(10) << '\n';
    std::cout << accumulate(8) << '\n';
    std::cout << accumulate(6) << '\n';
    std::cout << accumulate(4) << '\n';
    std::cout << accumulate(2) << '\n';

    return 0;
}
