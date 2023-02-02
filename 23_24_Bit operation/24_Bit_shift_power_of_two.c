#include <stdio.h>

int main()
{
    unsigned char num1 = 1; //   1: 0000 0001

    printf("%u\n", num1 << 1);  //   2: 0000 0010: 2
    printf("%u\n", num1 << 2);  //   4: 0000 0100: 22
    printf("%u\n", num1 << 3);  //   8: 0000 1000: 23
    printf("%u\n", num1 << 4);  //  16: 0001 0000: 24
    printf("%u\n", num1 << 5);  //  32: 0010 0000: 25
    printf("%u\n", num1 << 6);  //  64: 0100 0000: 26
    printf("%u\n", num1 << 7);  // 128: 1000 0000: 27
    printf("%u\n", num1 << 8);  // 8비트를 넘어가지만 %u는 unsigned int여서 출력이 됨
    printf("%u\n", num1 << 32); // 출력 형식에서 overflow 발생 2^0으로 돌아감

    return 0;
}