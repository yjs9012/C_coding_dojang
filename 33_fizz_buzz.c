#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
            printf("%s ", "FizzBuzz");
        else if (i % 3 == 0)
            printf("%s ", "Fizz");
        else if (i % 5 == 0)
            printf("%s ", "Buzz");
        else
            printf("%d ", i);
    }
    return 0;
}