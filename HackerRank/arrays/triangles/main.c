#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
int perimeter(triangle t)
{
    return (t.a + t.b + t.c);
}
triangle randomTriangle()
{
    triangle k;
    k.a = rand() % 15 + 3;
    k.b = rand() % 15 + 3;
    k.c = rand() % (k.a + k.b);
    return k;
}
int area(triangle t)
{
    int s = perimeter(t) / 2;

    return (s * (s - t.a) * (s - t.b) * (s - t.c));
}
void swap(triangle *t, int i, int j)
{
    triangle temp = *(t + i);
    *(t + i) = *(t + j);
    *(t + j) = temp;
}
int compareArea(triangle t1, triangle t2)
{
    return area(t1) >= area(t2);
}
void sort_by_area(triangle *tr, int n)
{
    /**
     * Sort an array a of the length n
     */
    triangle a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            a = tr[j];
            b = tr[j - 1];
            if (compareArea(b, a))
                swap(tr, j, j - 1);
        }
    }
}

int main()
{
    int n = 6;
    // scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        tr[i] = randomTriangle();
    }

    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d %d\n", tr[i].a, tr[i].b, tr[i].c, area(tr[i]));
    }
    return 0;
}