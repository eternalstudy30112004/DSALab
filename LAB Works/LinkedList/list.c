#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

#include "list.h"

void init_SLL(SLL *head) {
    *head = NULL;
    return;
}

void append(SLL *head, int d){
    node *p, *newnode;
    newnode = (node*)malloc(sizeof(node));
    if(!newnode)
      return;
    newnode->data = d;
    newnode->next = NULL;
    
    if(*head == NULL){
        *head = newnode;
        return;
    }
    p = *head;
    while(p -> next) {
       p = p->next;
    }
    p->next = newnode;
    return;
}

void insert_beg(SLL *head, int d){
    node  *newnode;
    newnode = (node*)malloc(sizeof(node));
    if(!newnode)
      return;
    newnode->data = d;
    newnode->next = *head;
    *head = newnode;
    return;
}
void delete_beg(SLL *head)
{
  node *p = *head;
  if (!(*head) )
      return;

  *head = (*head)->next;
  free(p);
  return;
}

void delete_end (SLL *head)
{
  node *p = *head;
  node *q;

  if (*head == NULL)
  	return;

  if (p-> next == NULL){
      *head = NULL;
      return;
    }

  while (p->next != NULL)
    {
      q = p;
      p = p->next;
    }
  q->next = NULL;
  free (p);
  return;
}


void traverse(SLL head){
    printf("[");
    node *p;
    p = head;
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("]\n");
    return;
}

void destroy(SLL *l){
  node *p = *l;
  node *q;
  while(p){
    q = p;
    p = p->next;
    free(q);
  }
  return;
}

int search(SLL *l, int val){
  node *p = *l;
  while (p)
  {
    if(p->data == val)
      return INT_MAX;
    p = p->next;
  }
  return INT_MIN;
  
}
node *getNode(SLL *l, int pos){
  node *p = *l;
  while(pos > 0 && p){
    p = p->next;
    pos--;
  }
  return p;
}
void swapNode(node *p, node *q){
  int temp = p->data;
  p->data = q->data;
  q->data = temp;
}
void reverse(SLL *l, int count){
  int pos = count - 1;
  node *q = NULL;
  node *p = *l;
  while(pos >= count/2){
    q = getNode(l, pos);
    swapNode(p, q);
    p = p->next;
    pos--;
  }
}
void reverse_even(SLL *head){
  node *p = *head;
  int con = 0;
  node *q = NULL;
  while(p){
    if(p->data % 2 == 0){
      if(!q)
        q = p;
      con++;
    }else{
      if(con >= 2){
        reverse(&q, con);
    }
      con = 0;
      q = NULL;
    }
    
    p= p->next;
  }
  return;
}
int is_palindrome(SLL *head){
    node *p = *head;
    int count = 0;
    while(p){
        count++;
        p = p->next;
    }
    int sum = 0;
    int mid;
    p = *head;
    int sign = 1;
    int i = 0;
    while(p){
        sum += sign * p->data;
        if(i == count/2){
            mid = p->data;
            if(count%2 == 0)
              sign *=-1;
        }else{
        sign *= -1;
        }
        p = p->next;
        i++;
    }
    if(count % 2){
        return sum == mid;
    }else{
        return sum == 0;
    }    
}


