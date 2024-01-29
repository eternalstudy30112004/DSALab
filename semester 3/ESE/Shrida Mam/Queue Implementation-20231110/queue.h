#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef struct queue{
    int rear;
    int front;
    int size;
    int *Q;

}queue;


void init(queue *q,int len);
int isFull(queue q);
int isEmpty(queue q);
void enqueue(queue *q,int x);
int dequeue(queue *q);

#endif // QUEUE_H_INCLUDED
