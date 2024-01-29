#include <stdio.h>

void floydPattern(short n)
{
    short counter = 1;
    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < i + 1; j++)
        {
            printf("%d ", counter++);
        }
        printf("\n");
    }
}
int main()
{
    short n;
    scanf("%hd", &n);
    floydPattern(n);
    return 0;
}