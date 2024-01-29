#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void init(struct stack *s, int size)
{
    s->data = (int *)malloc(sizeof(int) * size);
    s->size = size;
    printf("afss");
}

int top(stack *s)
{
    return s->data[s->top];
}
int isFull(stack *s)
{
    return s->top + 1 < s->size;
}
void push(stack *s, int x)
{
    if (isFull(s))
        return;
    s->top++;
    s->data[s->top + 1] = x;
    return;
}
int isEmpty(stack *s)
{
    return s->top == -1;
}
void pop(stack *s)
{
    if (isEmpty(s))
        return;
    s->top--;
}
void print(stack s){
    if(isEmpty(&s)){
        printf("Stack is empty\n");
        return;
    }
    int i = 0;
    while(i <= s.top){
        printf("%d\n", s.data[i]);
        i++;
    }
    return;
    
}