
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "circular.h"

void init(circular *l)
{
	*l = NULL;
	return;
}

void insert_end(circular *l, int d)
{
	node *p = *l;
	node *nn = (node *)malloc(sizeof(node));
	if (!nn)
		return;
	nn->d = d;
	nn->next = NULL;

	if (!(*l))
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

void insert_beg(circular *l, int d)
{
	node *p;
	node *nn = (node *)malloc(sizeof(node));
	if (!nn)
		return;

	nn->d = d;
	nn->next = NULL;

	if (!(*l))
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

void del_beg(circular *l)
{
	node *p, *q;
	if (!(*l))
		return;

	p = *l;
	*l = p->next;
	q = p;
	while (q->next != *l)
		q = q->next;
	q->next = p->next;

	free(p);
	return;
}

void del_end(circular *l)
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

void traverse(circular l)
{
	node *p = l;
	while (p != l)
	{
		printf("%d", p->d);
		p = p->next;
	}
	return;
}
