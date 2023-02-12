#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char *arr = malloc(sizeof(char) * 11);
    int num, length;

    scanf("%d %s", &num, arr);

    length = strlen(arr);

    if (length < num)
    {
        printf("wrong");
    }
    else
    {
        for (int i = 0; i < length - num + 1; i++)
        {
            for (int j = 0; j < num; j++) // 원하는 글자수 만큼 출력한다.
            {
                printf("%c", arr[i + j]);
            }
            printf("\n");
        }
    }
    free(arr);
    return 0;
}