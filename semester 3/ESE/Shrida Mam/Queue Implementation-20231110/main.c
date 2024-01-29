/*
File Name:
Author: Shrida Kalamkar

*/

#include<stdio.h>
#include"queue.h"


//Problem :

int main(){
    int i;
    queue q1,q2;
    init(&q1,5);
    init(&q2,6);
    enqueue(&q1,10);
    enqueue(&q1,20);
    enqueue(&q1,30);

    printf("Queue 1 contents:\n");
    for(i=q1.front+1;i<=q1.rear;i++)
        printf("%d ",q1.Q[i]);
    printf("\n");

    printf("%d ",dequeue(&q1));
    return 0;
}
