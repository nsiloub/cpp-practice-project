#include <iostream>

int calculate(int x, int y, char operatorChar) // "calculateAndPrintErrors()" actually :)
{
    switch (operatorChar)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        if (y == 0)  //if dividing by zero
        {
            std::cout << "[ERROR] Cannot divide by zero.\n";
            return {};
        }
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "[ERROR] Wrong operator\n";
        return {};
    }

}


int getUserInt()
{
   int userValue {};
   std::cin >> userValue;
   return userValue;
}


int main()
{
    std::cout << "Enter an integer: ";
    const int x { getUserInt() };

    std::cout << "Enter another integer: ";
    const int y { getUserInt() };

    std::cout << "Enter an operator (+, -, *, /, %): ";
    char operatorChar {};
    std::cin >> operatorChar;


    std::cout << x << ' ' << operatorChar << ' ' << y << " = " << calculate(x, y, operatorChar) << '\n';

    return 0;
}
