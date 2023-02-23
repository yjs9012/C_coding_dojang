#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compareString(void *ptr1, void *ptr2)
{
    if (strcmp(ptr1, ptr2) == 0)
        printf("같음\n");
    else
        printf("다름\n");
}

int main()
{
    char *s1 = malloc(sizeof(char) * 10);

    strcpy(s1, "Venus");

    compareString(s1, "Venus");

    free(s1);

    return 0;
}