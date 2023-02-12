#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char text[30];
    int length;
    int n = 4;

    scanf("%s", text);

    length = strlen(text);
    if (length <= 4)
    {
        printf("wrong\n");
    }
    else
    {
        for (int i = 0; i < length - 4; i++)
        {
            for (int j = 0; j < 4; j++)
                printf("%c", text[i + j]);

            printf("\n");
        }
    }

    return 0;
}