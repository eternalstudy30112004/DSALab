#include <stdio.h>
/*
 * ARRAY SIZE HAS TO A CONSTANT
 */

/*This cannot be done
    int size = 5;
    char vowels[size] ={'a','e','i','o','u'};
    instead do this..
    */

#define size 5
int main()
{
    int i;
    char v[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char vowels[] = "Hello";
    printf("Value of : %d", sizeof(v));
    printf("Value of : %d", sizeof(vowels));
    for (i = 0; i < size + 1; i++)
    {
        // printf("%c\n", vowels[i]);
        printf("%c\n", vowels[i]);
    }
    return 0;
}
