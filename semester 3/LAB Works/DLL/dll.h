#ifndef ASCII_ADT_H
#define ASCII_ADT_H

typedef struct node {
    int data;
    struct node* next;
    struct node* prev;
} node;

typedef struct list {
    node* front;
    node* rear;
} list;

typedef struct ASCII {
    list digitsList;
} ASCII;

void init_ASCII(ASCII* head);
void ASCII_of(ASCII* head, char ch);
void traverse(ASCII* head);
void destroy(list* head);

#endif
