#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char arr[30] = "Hello";
    int length;

    length = strlen(arr);

    for (int i = 0; i < length - 1; i++)
    {
        printf("%c%c\n", arr[i], arr[i + 1]);
    }

    return 0;
}