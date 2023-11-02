#include <stdlib.h>
#include <stdio.h>
typedef struct node
{
    int m;
    struct node *left, *right;
} node;
typedef node *tree;
void insert(tree *r, int i)
{
    tree t, p, q;
    int j;
    t = (node *)malloc(sizeof(node));
    t->m = i;
    t->left = t->right = NULL;
    if (*r == NULL)
    {
        *r = t;
        return;
    }
    q = p = *r;
    j = i;
    while (i)
    {
        if (!p)
            p = q;
        if (i % 2 && p)
            p = p->left;
        else if (p)
            p = p->right;
        i--;
    }
    printf("%p", q);
    if (j % 2)
        q->left = t;
    else
        q->right = t;
    return;
}
int main()
{
    int i;
    tree p;
    p = NULL;
    for (i = 0; i < 3; i++)
    {
        insert(&p, i);
        printf("Value of i: %d", i);
    }

    return 0;
}