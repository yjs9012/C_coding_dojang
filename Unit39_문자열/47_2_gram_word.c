#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char text[100] = "this is c language";
    char *token[30] = {
        NULL,
    };
    int count = 0;

    char *ptr = strtok(text, " ");

    while (ptr != NULL)
    {
        token[count] = ptr;
        count++;

        ptr = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++)
    {
        printf("%s %s\n", token[i], token[i + 1]);
    }
    return 0;
}