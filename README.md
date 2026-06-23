# Question #3

Invert the nested loops example so it prints the following:

```
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
```  
<br><br>

## The example:
```c++
#include <iostream>

int main()
{
    int outer{ 1 };
    while (outer <= 5)
    {

        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }

        std::cout << '\n';
        ++outer;
    }

    return 0;
}
```
## Example's output:
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```