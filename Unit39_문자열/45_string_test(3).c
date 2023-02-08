#define _CRT_SECURE_NO_WARNINGS // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h> // strtok 함수가 선언된 헤더 파일
#include <stdlib.h>

int main()
{
    char str[1001];
    int count = 0;

    scanf("%[^\n]s", str);

    char *tok = strtok(str, " .,");

    while (tok != NULL)
    {
        if (strcmp(tok, "the") == 0)
        {
            count++;
        }
        tok = strtok(NULL, " .,");
    }
    printf("%d", count);

    return 0;
}