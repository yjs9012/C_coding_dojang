/***************************************************
 * 포인터 연산시 void형 포인터는 연산 불가능
 * void의 크기는 1byte이지만 자료형크기가 정해져 있지않아 에러남.
***************************************************/
#include <stdio.h>

int main()
{
    int numArr[5] = { 11, 22, 33, 44, 55 };
    int *numPtrA;
    int *numPtrB;
    int *numPtrC;

    numPtrA = numArr;    // 배열 첫 번째 요소의 주소를 포인터에 저장

    numPtrB = numPtrA + 1;    // 포인터 연산. numPtrA + 4바이트
    numPtrC = numPtrA + 2;    // 포인터 연산. numPtrA + 8바이트

    printf("%d\n", *numPtrB);    // 22: 역참조로 값을 가져옴, numArr[1]과 같음
    printf("%d\n", *numPtrC);    // 33: 역참조로 값을 가져옴, numArr[2]와 같음

    printf("%d\n", *(numPtrA + 1));    // 22: numPtrA에서 순방향으로 4바이트만큼 떨어진
                                       // 메모리에 주소에 접근. numArr[1]과 같음
    printf("%d\n", *(numPtrA + 2));    // 33: numPtrA에서 순방향으로 8바이트만큼 떨어진
                                       // 메모리에 주소에 접근. numArr[2]와 같음


    return 0;
}