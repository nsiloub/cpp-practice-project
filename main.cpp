#include <iostream>

int main()
{
    // a = 65; z = xx; (they resolve to int8_t numbers
    char a { 'a' };
    // loop from a through z
    while(a <= 'z')
    {
        std::cout << static_cast<char>(a) << ' ';
        ++a;
    }

    return 0;
}
