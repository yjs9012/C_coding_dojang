#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/***********************************************************************************
 1. scanf("%s", s1)으로 "Hello World" 입력시 Hello만 입력됨.(공백직전까지만 저장)
 2. scanf("%[^\n]s")와 같이 지정하면 공백까지 포함하여 문자열 입력 받을수 있음.
 3. (참고) EOF : End Of File = int -1
************************************************************************************/
int main()
{
    // 배열 형태의 문자열에 입력값 저장
    char s1[10]; // 크기가 10인 char형 배열을 선언

    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", s1);
    printf("%s\n", s1);

    // 문자열 포인터에 입력값 저장
    char *s2 = malloc(sizeof(char) * 10); // char 10만큼 동적 메모리 할당
    printf("문자열을 입력하세요: ");
    scanf("%s", s2);
    printf("%s\n", s2);
    free(s2);
    return 0;
}