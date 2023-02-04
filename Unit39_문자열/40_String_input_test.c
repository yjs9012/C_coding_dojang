#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *pchar1 = malloc(sizeof(char) * 30);
    char *pchar2 = malloc(sizeof(char) * 30);
    char *pchar3 = malloc(sizeof(char) * 30);
    char *pchar4 = malloc(sizeof(char) * 30);

    scanf("%s %s %s %s", pchar1, pchar2, pchar3, pchar4);

    printf("%s\n", pchar1);
    printf("%s\n", pchar2);
    printf("%s\n", pchar3);
    printf("%s\n", pchar4);

    return 0;
}