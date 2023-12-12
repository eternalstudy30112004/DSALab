#include <stdio.h>
int countOccurences(char a[], char toFind)
{
    int count = 0, i = 0;
    while (a[i] != '\0')
    {
        count += (a[i] == toFind);
        i++;
    }
    return count;
}
int main()
{
    char string[] = "Hello, World";
    char toCount = 'l';
    printf("%d", countOccurences(string, toCount));
    return 0;
}