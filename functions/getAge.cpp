#include "getAge.h"

int getAge()
{
    int age {};
    std::cin >> age;

    if (age <= 0)
        return 0;

    return age;
}
