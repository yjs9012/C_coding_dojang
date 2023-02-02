#include <stdio.h>

int main()
{
    unsigned char num1 = 1; //  1: 0000 0001
    unsigned char num2 = 8; //  8: 0000 0100

    printf("%u\n", num1 << 3);
    printf("%u\n", num2 >> 3);
    return 0;
}