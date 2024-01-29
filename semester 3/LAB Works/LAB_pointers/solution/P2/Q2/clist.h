#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct clist{
    node *head;
}clist;

void init(clist *c)
{
    c->head = NULL;
}
node *createNode(int data)
{
    node *n = (node *)malloc(sizeof(node));
    if (n)
    {
        n->data = data;
        n->next - NULL;
    }
    return n;
}

void insert_beg(clist *c, int data)
{
    node *n = createNode(data);
    if (c->head == NULL)
    {
        c->head = n;
        n->next = c->head;
        return;
    }
    node *q;
    node *p = c->head;
    while (p->next != c->head)
    {
        q = p;
        p = p->next;
    }

    n->next = c->head;
    q->next = n;
    c->head = n;
    return;
}