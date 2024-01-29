#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    switch ((int)a)
    {
    case 97:
    case 101:
    case 105:
    case 117:
    case 111:
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
        printf("Character is Vowel");
        break;
    default:
        printf("Character is Consonant");
        break;
    }
    return 0;
}