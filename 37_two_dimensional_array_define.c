#include <stdio.h>

int main()
{
    int numArr[3][4] = {// 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
                        {11, 22, 33, 44},
                        {55, 66, 77, 88},
                        {99, 110, 121, 132}};
    int numArr2[][4] = {// 행의 개수 생략가능, 열의 개수는 반드시 지정
                        {11, 22, 33},
                        {55, 66, 77, 88},
                        {99, 110}};
    int numArr3[3][4] = {
        // 0으로 간단하게 초기화
        0,
    };

    printf("%d\n", numArr[2][3]);  // 132
    printf("%d\n", numArr2[2][3]); // 초기화된값 0 출력
    printf("%d\n", numArr2[2][3]); // 초기화된값 0 출력
}