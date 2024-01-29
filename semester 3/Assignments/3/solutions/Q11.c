#include <stdio.h>

int main()
{
    char string[20];
    printf("Enter string : ");
    scanf("%[^\n]", string);
    char freq[100] = {0};

    for (int i = 0; string[i] != '\0'; i++)
    {
        freq[string[i] - 'A'] += 1;
    }
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c : %d\n", i + 'A', freq[i]);
        }
    }

    return 0;
}