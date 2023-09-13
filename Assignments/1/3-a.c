#include <stdio.h>
int isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    else
        return 0;
}
int main()
{
    char a;
    scanf("%c", &a);
    if (isVowel(a))
        printf("Character is vowel");
    else
        printf("Character is consonant");
    return 0;
}