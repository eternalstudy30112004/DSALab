#include <stdio.h>
#include <ctype.h>

int get_int(char *p)
{
    char c;
    int sign;
    while (isspace(c = getch()))
        ;

    // c is no longer white spaces
    // c can either be + - or a digit
    // unless we have that we have to skip
    if (c != '-' && c != '+' && c != EOF && !isdigit(c))
        c = ungetch();
    sign = (c == '-' ? -1 : 1);
    int num = 0;
    while (isdigit(c = getch()))
    {
        num = 10 * num + (c - '0');
    }
    return num * sign;
};

int main()
{

    return 0;
}