#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char *text = malloc(sizeof(char) * 31);
    int length, isPalindrome = 1;

    scanf("%[^\n]s", text);

    char *tok = strtok(text, " ");
    text = tok;

    while (tok != NULL)
    {
        tok = strtok(NULL, " ");
        if (tok != NULL)
            strcat(text, tok);
    }
    length = strlen(text);

    for (int i = 0; i < length / 2; i++)
        if (text[i] != text[length - 1 - i])
        {
            // 회문이 아님
            isPalindrome = 0;
            break;
        }
    printf("%d\n", isPalindrome);
    free(text);
    return 0;
}
