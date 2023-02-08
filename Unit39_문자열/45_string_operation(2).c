#include <stdio.h>
#include <string.h> // strtok 함수가 선언된 헤더 파일
#include <stdlib.h>

/***********************************************************************************
 1. 문자열 배열 자르기 : strtok(대상문자열, 기준문자)
    - char* strtok(char* _String, char const* _Delimiter);
    - 자른 문자열을 반환, 더 이상 자를 문자열이 없으면 NULL을 반환.
    - https://edu.dojang.io/mod/page/view.php?id=1959
    - 기준문자를 ",:= "같이 여러개 설정할수도 있음
 2. 문자열 포인터 자료형 : 동적메모리를 할당하고, 문자열 복사
************************************************************************************/

int main()
{
    char s1[30] = "The Little Prince"; // 크기가 30인 char형 배열을 선언하고 문자열 할당
    char *s2 = malloc(sizeof(char *) * 30);
    strcpy(s2, "The Little Prince");

    // 문자열 배열 자리그
    char *ptr = strtok(s1, " "); // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
    while (ptr != NULL)          // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);     // 자른 문자열 출력
        ptr = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환
    }

    // 문자열 포인터 자르기
    char *ptr2 = strtok(s2, " ");
    while (ptr2 != NULL) // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr2);     // 자른 문자열 출력
        ptr2 = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}