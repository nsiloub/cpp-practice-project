#include "printText.h"
#include <string_view>
#include <iostream>

void printText(std::string_view name1, int ageForN1, std::string_view name2, int ageForN2)
{
    if (ageForN1 > ageForN2)
        std::cout << name1 << "(age " << ageForN1 << ") is older than "
        << name2 << "(age " << ageForN2 << ").\n";
    else if (ageForN1 < ageForN2)
        std::cout << name2 << "(age " << ageForN2 << ") is older than "
        << name1 << "(age " << ageForN1 << ").\n";
    else
        std::cout << name1 << "(age " << ageForN1 << ") and  "
        << name2 << "(age " << ageForN2 << ") are the same age.\n";
}
