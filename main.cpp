#include <iostream>

void fizzbuzzpop(int value)
{
    for ( int i { 1 }; i <= value; ++i)
    {
        bool isDivisible { false };

        if ( !(i % 3) )
        {
            std::cout << "fizz";
            isDivisible = true;
        }
        if ( !(i % 5) )
        {
            std::cout << "buzz";
            isDivisible = true;
        }
        if ( !(i % 7) )
        {
            std::cout << "pop";
            isDivisible = true;
        }


        if ( !isDivisible )
            std::cout << i;

        std::cout << '\n';
    }
}


int main()
{
    std::cout << "Enter a non-zero positive integer: ";
    int value {};
    std::cin >> value;

    fizzbuzzpop(value);

    return 0;
}
