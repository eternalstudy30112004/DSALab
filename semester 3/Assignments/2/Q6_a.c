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
    short stars, total_spaces = (2 * n + 1) * 2;
    for (short i = 0; i < n; i++)
    {
        stars = 2 * (i) + 1;
        printSpaces(total_spaces / 2 - stars);
        for (short j = 0; j < stars; j++)
        {
            printf("%s ", "*");
        }
        printSpaces(total_spaces / 2 - stars);
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