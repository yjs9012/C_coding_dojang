#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getQuotientAndRemainder(int a, int b, int *ptr)
{
    int temp1 = a / b;
    int temp2 = a % b;
    *ptr = temp2;
    return temp1;
}

int main()
{
    int num1;
    int num2;
    int quotient;  // 몫
    int remainder; // 나머지

    scanf("%d %d", &num1, &num2);

    quotient = getQuotientAndRemainder(num1, num2, &remainder);

    printf("%d %d\n", quotient, remainder);

    return 0;
}