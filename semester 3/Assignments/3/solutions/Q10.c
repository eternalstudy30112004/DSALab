#include <stdio.h>
int isVowel(char str)
{
    switch (str)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1;

    default:
        return 0;
    }
}
int isDigit(char str)
{
    switch (str)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        return 1;

    default:
        return 0;
    }
}
void displayStringStats(char str[])
{
    int i = 0;
    int blank = 0;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;

    while (str[i] != '\0')
    {

        if (isDigit(str[i]))
            digits++;

        else if (str[i] == ' ')
            blank++;

        else if (isVowel(str[i]))
            vowels++;
        else
            consonants++;

        i++;
    }
    printf("Number of digits in string are %d\n", digits);
    printf("Number of vowels in string are %d\n", vowels);
    printf("Number of consonants in string are %d\n", consonants);
    printf("Number of blank spaces in string are %d\n", blank);
}
int main()
{
    char string[100];
    printf("Enter a string : ");
    scanf("%[^\n]", string);
    printf("String: %s\n", string);
    displayStringStats(string);
    return 0;
}