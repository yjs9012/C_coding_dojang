#include <stdio.h>
/*******************************************

 배열을 선언할때
 1. int arr[3];
 2. int arr[] = {값, 값, 값};

*******************************************/

int main()
{
    int numArr[10] = {
        0,
    }; // 배열의 요소를 모두 0으로 초기화

    printf("%d\n", numArr[0]);                    // 1: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", sizeof(numArr) / sizeof(int)); // 2: 배열ㅇ의 길이 출력
    return 0;
}