#include "getName.h"

std::string getName()
{
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    return name;
}
