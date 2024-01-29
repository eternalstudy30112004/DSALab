#include <stdio.h>
void printChars(short start, short end)
{
    for (short i = start; i < end; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
}
int main()
{
    printf("Lowercase alphabets: ");
    printChars(97, 97 + 26);
    printf("Uppercase alphabets: ");
    printChars(65, 65 + 26);
    return 0;
}