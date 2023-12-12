
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "circular.h"

void init(clist *l)
{
	*l = NULL;
	return;
}

void insert_end(clist *l, int d)
{
	node *p = *l;
	node *nn = (node *)malloc(sizeof(node));
	if (nn)
	{
		nn->d = d;
		nn->next = NULL;
		printf("%d", nn->d);
	}
	else
		return;

	if (*l == NULL)
	{
		nn->next = *l;
		*l = nn;
	}
	else
	{
		while (p->next != *l)
		{
			p = p->next;
		}
		p->next = nn;
	}
	nn->next = *l;

	return;
}

void insert_beg(clist *l, int d)
{
	node *p;
	node *nn = (node *)malloc(sizeof(node));
	if (nn)
	{
		nn->d = d;
		nn->next = NULL;
	}
	else
		return;
	if (*l == NULL)
	{
		*l = nn;
		nn->next = *l;
	}
	else
	{
		p = *l;
		nn->next = p;
		while (p->next != *l)
		{
			p = p->next;
		}
		p->next = nn;
	}

	*l = nn;
	return;
}

void del_beg(clist *l)
{
	node *p, *q;
	if (*l == NULL)
		return;
	else
		p = *l;
	*l = p->next;
	q = p;
	while (q->next != *l)
		q = q->next;
	q->next = p->next;

	free(p);
	return;
}

void del_end(clist *l)
{
	node *p, *q;
	if (*l == NULL)
		return;
	else
		p = *l;
	while (p->next != *l)
	{
		q = p;
		p = p->next;
	}
	free(p);
	q->next = *l;
	return;
}

void traverse(clist l)
{
	node p = *l;
	int i = 0;
	printf("asff");
	while (&p != l && i != 0)
	{
		printf("%d", i++);
		printf("%d", p.d);
		p = *p.next;
	}
	printf("exited");

	return;
}
