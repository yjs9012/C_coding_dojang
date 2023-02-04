#include <stdio.h>

/*******************************************
 1. (Pointer to array) int (*parr)[가로크기] = arr   ex) parr = arr = arr[0]
                       int (*parr)[세로크기][가로크기]
 2. (Array pointer) int *arrptr[3] = (&a, &b, &c)
*******************************************/

int main()
{
    int numArr[3][4] = {// 세로 3, 가로 4 크기의 int형 2차원 배열 선언
                        {11, 22, 33, 44},
                        {55, 66, 77, 88},
                        {99, 110, 121, 132}};

    int(*numPtr)[4] = numArr;

    printf("%p\n", *numPtr); // 002BFE5C: 2차원 배열 포인터를 역참조하면 세로 첫 번째의 주소가 나옴
    printf("%p\n", *numArr); // 002BFE5C: 2차원 배열을 역참조하면 세로 첫 번째의 주소가 나옴

    printf("%d\n", numPtr[2][1]); // 110: 2차원 배열 포인터는 인덱스로 접근할 수 있음

    printf("%d\n", sizeof(numArr)); // 48: sizeof로 2차원 배열의 크기를 구하면 배열이 메모리에
                                    // 차지하는 공간이 출력됨

    printf("%d\n", sizeof(numPtr)); // 8 : sizeof로 2차원 배열 포인터의 크기를

    return 0;
}