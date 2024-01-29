#include <stdio.h>

int main()
{
    short i = 32780;
    printf("%hu", i);
    // for (;;)
    // {
    //     if (i > 32000)
    //     {
    //         printf("%hd\n", i);
    //     }
    //     if (i == 0)
    //     {
    //         break;
    //     }
    //     i++;
    // }
    printf("%d", i);
    return 0;
}