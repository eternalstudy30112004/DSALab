#include <stdio.h>
char *strtok(char *string, char delimiter)
{
    static int i = 0;
    static int l = 0;
    if (i == 0)
    {
        l = sizeof(*string) - 1;
    }
    int j = 0;
    if (i != 0)
        i++;

    while (*(string + i) != delimiter && *(string + i) != '\0')
    {
        j++;
        i++;
    }
    printf("%d %d", i, l);
    if (i > l)
        return NULL;
    *(string + i) = '\0';
    return string + (i - j);
}

int main()
{
    char string[] = "Aidty desa alsn";
    printf("%s", string);
    printf("%d", sizeof(string));
    char *tok = strtok(string, ' ');
    printf("'%s'\n", tok);
    tok = strtok(string, ' ');
    printf("'%s'\n", tok);
    tok = strtok(string, ' ');
    printf("'%s'", tok);
    tok = strtok(string, ' ');
    printf("'%s'", tok);

    return 0;
}