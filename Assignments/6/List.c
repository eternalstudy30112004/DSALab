#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "List.h"

void init(list *head)
{
  *head = NULL;
  return;
}
node *createNode(int d, int row, int col)
{
  node *newnode;
  newnode = (node *)malloc(sizeof(node));
  if (!newnode)
    return NULL;
  newnode->data = d;
  newnode->row = row;
  newnode->column = col;

  newnode->next = NULL;
  return newnode;
}
void insert_end(list *head, int d, int row, int col)
{
  node *p, *newnode;
  newnode = createNode(d, row, col);
  if (!newnode)
    return;

  if (*head == NULL)
  {
    *head = newnode;
    return;
  }
  p = *head;
  while (p->next)
  {
    p = p->next;
  }
  p->next = newnode;
  return;
}

void insert_beg(list *head, int d, int row, int col)
{
  node *newnode;
  newnode = (node *)malloc(sizeof(node));
  if (!newnode)
    return;
  newnode->data = d;
  newnode->next = *head;
  *head = newnode;
  return;
}
void delete_beg(list *head)
{
  node *p = *head;
  if (!(*head))
    return;

  *head = (*head)->next;
  free(p);
  return;
}

void delete_end(list *head)
{
  node *p = *head;
  node *q;

  if (*head == NULL)
    return;

  if (p->next == NULL)
  {
    *head = NULL;
    return;
  }

  while (p->next != NULL)
  {
    q = p;
    p = p->next;
  }
  q->next = NULL;
  free(p);
  return;
}

void traverse(list head, int row, int col)
{
  node *p;
  p = head;
  printf("----------------------------\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (p->row == i && p->column == j)
      {
        printf("%d ", p->data);
        if(p->next)
        p = p->next;
      }else{
        printf("%d ", 0);
      }
    }
    printf("\n");
  }

   
  printf("----------------------------\n");
  return;
}


void destroy(list *l)
{
  node *p = *l;
  node *q;
  while (p)
  {
    q = p;
    p = p->next;
    free(q);
  }
  return;
}

int search(list *l, int val)
{
  node *p = *l;
  while (p)
  {
    if (p->data == val)
      return INT_MAX;
    p = p->next;
  }
  return INT_MIN;
}

int count(list *l)
{
  node *p = *l;
  int c = 0;
  while (p)
  {
    p = p->next;
    c++;
  }
  return c;
}