#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getName()
{
    char *pName = malloc(sizeof(100));
    strcpy(pName, "Neptune");
    return pName;
}

int main()
{
    char *name;

    name = getName();

    printf("%s\n", name);

    free(name);

    return 0;
}