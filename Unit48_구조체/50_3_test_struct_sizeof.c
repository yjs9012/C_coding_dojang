#include <stdio.h>

struct EncryptionHeader {
    char flags;
    short a;
    long long b;
};
 
int main()
{
    struct EncryptionHeader header;
 
    printf("%d\n", sizeof(header));

    return 0;
}