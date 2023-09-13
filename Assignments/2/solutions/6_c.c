#include <stdio.h>
void printSpaces(short space)
{
    for (short i = 0; i < space; i++)
    {
        printf(" ");
    }
}
void pattern(short n)
{
    short total_spaces = n * 2 - 1;
    short dig = 0;
    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < i; j++)
        {

            printf("%hd", dig);
            dig = dig == 0 ? 1 : 0;
        }
        printSpaces(total_spaces - (i + 1) * 2);
        dig = 0;
        for (short j = 0; j < i; j++)
        {

            printf("%hd", dig);
            dig = dig == 0 ? 1 : 0;
        }
        printf("\n");
    }
}
int main()
{
    short n;
    scanf("%hd", &n);
    pattern(n);
    return 0;
}