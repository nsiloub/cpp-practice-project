#include "getName.h"
#include "getAge.h"
#include "printText.h"
#include <iostream>
#include <string_view>

void promptName(int userNumber)
{
    std::cout << "Enter the name of person #" << userNumber << ": ";
}

void promptAge(std::string_view personName)
{
    std::cout << "Enter the age of " << personName << ": ";
}

int main()
{
    promptName(1); // For the first person
    std::string name1 { getName() };
    promptAge(name1);
    int ageForN1 { getAge() };


    promptName(2); // For the second person
    std::string name2 { getName() };
    promptAge(name2);
    int ageForN2 { getAge() };

    printText(name1, ageForN1, name2, ageForN2);

    return 0;
}
