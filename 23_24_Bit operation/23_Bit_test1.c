#include <stdio.h>

int main()
{
    unsigned int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 & num2);
    printf("%u\n", ~num1);

    return 0;
}