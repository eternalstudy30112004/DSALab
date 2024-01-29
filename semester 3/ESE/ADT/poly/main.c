#include <stdio.h>
#include "arr.c"

array Gsum(array p1, array p2, int mul)
{
    term *p, *q;
    array *result = (array *)malloc(sizeof(array));
    init(result, p1.size+p2.size);
    p = p1.data;
    q = p2.data;
    

    while (p - p1.data < p1.size && q-p2.data < p2.size)
    {
        if (p->degree > q->degree)
        {
            append(result, p->degree, p->coeff);
            p++;
            printf("%d", p);
        }
        else if (p->degree < q->degree)
        {
            append(result, q->degree, mul * q->coeff);
            q++;
        }
        else
        {
            if (p->coeff + mul*q->coeff)
                append(result, q->degree, p->coeff + mul*q->coeff);
            p = p++;
            q = q++;
        }
    }

    while (q != NULL)
    {
        append(result, q->degree, mul * q->coeff);
        q = q++;
    }
    while (p != NULL)
    {
        append(result, p->degree, p->coeff);
        p = p++;
    }

    return *result;
}

array sum(array p1, array p2)
{
    return Gsum(p1, p2, 1);
}
array diff(array p1, array p2)
{
    return Gsum(p1, p2, -1);
}

int main()
{
    array p1, p2;
    init(&p1, 10);
    init(&p2, 10);
    append(&p1, 3, 7);
    append(&p1, 1, 4);
    append(&p1, 0, 3);
    traverse(p1);
    append(&p2, 4, 5);
    append(&p2, 3, 7);
    append(&p2, 2, 1);
    append(&p2, 1, 4);
    traverse(p2);
    array s = sum(p1, p2);
    traverse(s);
    array d = diff(p1, p2);
    traverse(d);
    return 0;
}