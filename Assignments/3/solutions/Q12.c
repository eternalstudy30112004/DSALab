#include <stdio.h>
void toggleCharacterCase(char string[])
{
    int i = 0;

    while (string[i] != '\0')
    {
        if (string[i] >= 65 && string[i] <= 62 + 26)
            string[i] += 32;
        else if (string[i] >= 97 && string[i] <= 97 + 26)
            string[i] -= 32;
        i++;
    }
}
int main()
{
    char string[100];
    printf("Enter a string : ");
    scanf("%[^\n]", string);
    printf("Input String: %s\n", string);
    toggleCharacterCase(string);
    printf("Toggled String: %s", string);
    return 0;
}