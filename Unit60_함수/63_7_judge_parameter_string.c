#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFullName(char *ptr1, char *ptr2)
{
    printf("%s%s\n", ptr1, ptr2);
}

int main()
{
    char familyName[31];
    char givenName[31];

    scanf("%s %s", familyName, givenName);

    printFullName(familyName, givenName);

    return 0;
}