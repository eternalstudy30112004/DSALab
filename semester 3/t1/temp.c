// #include <stdio.h>
// // char a, b, c, d;
// // float e, f;
// // char g, h;

// // int main()
// // {

// //     printf("Value of a: %d", a);
// //     printf("Value of b: %d", b);
// //     printf("Value of c: %d", c);
// //     printf("Value of d: %d", d);
// //     printf("Value of e: %f", e);
// //     printf("Value of f: %f", f);
// //     printf("Value of g: '%c'", g);
// //     printf("Value of h: '%c'", h);
// //     return 0;
// // }
// #include <stdio.h>
// int main(void)
// {

//     unsigned int a = -25445;
//     printf("Value of a: %hd %d", a, 65536 - 25445);
//     char c = -5;
//     printf("Value of : %d", c);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int charCount = 5;
//     printf("%d", printf("\n"));
//     printf("%d", printf("The number of characters printed is: %d\n", charCount));
//     printf("Hello, World!%n\n", &charCount);
//     printf("The number of characters printed is: %d\n", charCount);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     unsigned short int a = 1 + 65536 * 2;
//     printf("Value of : %d", a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 7;
//     char c = 'w';
//     float f = 5.5;
//     printf("%f", (i + c) - (2 * f / 15));
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;
//     i = 10;
//     i = 3 * i++ + 2 * i--;
//     printf("Value of i: %d", i);
//     i = 10;
//     i = -2 * i++ + 2 * i--;
//     printf("Value of i: %d", i);

//     i = 5;
//     i = i++;
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i;
    (i = 1), 2, 3;
    printf("Value of i: %d", i);
    return 0;
}