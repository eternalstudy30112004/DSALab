#include <stdio.h>
char *strtok(char *s, char delimiter)
{
    static int count = 1;
    char *pos = count != 1 ? s + 1 : s;
    int counter = count;
    while (counter-- > 0)
    {
        while (*pos != ' ')
        {
            printf("%c", *pos);
            pos++;
        }
        *pos = '\0';
    }
    count++;
    return pos;
}
int main()
{
    char a[] = "Hello how are you";
    char *pos = strtok(a, ' ');
    printf("a : %u", a);
    printf("pos++ : %u : %s\n", pos++, *pos);
    printf("pos : %u: %s\n", pos++, *pos);
    printf("pos : %u: %s\n", pos++, *pos);
    pos = strtok(a, ' ');
    printf("pos++ : %u : %s\n", pos++, *pos);
    printf("pos : %u: %s\n", pos++, *pos);
    printf("pos : %u: %s\n", pos++, *pos);
    // *pos = strtok(a, ' ');
    return 0;
}