

#include<stdio.h>
#include"queue.c"

int main(){
    int i;
    int deq;
    queue q1;
    init(&q1,6);
    print(q1);

    enqueue(&q1,7);
    print(q1);

    enqueue(&q1,11);
    print(q1);

    enqueue(&q1,19);
    

    print(q1);
    deq = dequeue(&q1);
    printf("%d ",(deq == INT_MAX)?"Queue is empty":deq);
    print(q1);
    
    deq = dequeue(&q1);
    printf("%d ",(deq == INT_MIN)?"Queue is empty":deq);
    print(q1);
    deq = dequeue(&q1);
    printf("%d ",deq);
    print(q1);
    deq = dequeue(&q1);

    print(q1);
    return 0;
}
