#include <stdio.h>

int main()
{
    char character;
    int integerNum;
    unsigned int uIntegerNum;
    short shortInteger;
    unsigned short int uShortInteger;
    float floatingNum;
    double doubleNum;
    long int longInteger;
    unsigned long int uLongInteger;
    long long int longLongInteger;
    unsigned long long int uLongLongInteger;
    printf("Size of char: %d bytes\n", sizeof(character));
    printf("Size of integer: %d bytes\n", sizeof(integerNum));
    printf("Size of unsigned integer: %d bytes\n", sizeof(uIntegerNum));
    printf("Size of short integer: %d bytes\n", sizeof(shortInteger));
    printf("Size of unsigned short Integer: %d bytes\n", sizeof(uShortInteger));
    printf("Size of floating number: %d bytes\n", sizeof(floatingNum));
    printf("Size of double number: %d bytes\n", sizeof(doubleNum));
    printf("Size of long Integer: %d bytes\n", sizeof(longInteger));
    printf("Size of unsigned long Integer: %d bytes\n", sizeof(uLongInteger));
    printf("Size of long long Integer: %d bytes\n", sizeof(longLongInteger));
    printf("Size of unsigned long long Integer: %d bytes\n", sizeof(uLongLongInteger));
    return 0;
}