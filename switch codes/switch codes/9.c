/*
File Name:
Author: Shrida Kalamkar

*/

#include <stdio.h>

// Problem :

int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    switch (a > b)
    {
    case 0:
        printf("b is greater than a\n");
        break;
    case 1:
        printf("a is greater than b\n");
        break;
    default:
        printf("Thank You...");
    }

    return 0;
}
