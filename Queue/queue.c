
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"queue.h"

void init(queue *q,int len){
    q->size=len;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(sizeof(int)*len);
}

int isFull(queue q){
    if(q.rear==q.size-1){
        return 1;
    }
    else
        return 0;
}

int isEmpty(queue q){
    if(q.front==q.rear){
        return 1;
    }
    else
        return 0;

}
void enqueue(queue *q,int x)
{
    if(!isFull(*q)){
        q->rear++;
        
        q->Q[q->rear]=x;
        return;
    }
}

int dequeue(queue *q)
{
    int x=INT_MIN;
    if(!isEmpty(*q)){
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}


void print(queue q){
    int i;
    printf("\nQueue :\n");
    if(isEmpty(q)){
        printf("Empty  !!");
        return;
    }

    for(i=q.front+1;i<=q.rear;i++)
        printf("%d ",q.Q[i]);
    printf("\n---- \n");
}

