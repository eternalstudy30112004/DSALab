#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    char data;
    struct node *next;
} Node;

typedef struct queue
{
    Node *front, *rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = NULL;
}

int isEmpty(Queue q)
{
    return q.front == NULL;
}

void enqueue(Queue *q, char data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(*q))
    {
        q->front = q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

void dequeue(Queue *q)
{
    if (isEmpty(*q))
        return;

    Node *temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
}

void display(Queue q)
{
    printf("\n");
    Node *current = q.front;
    while (current != NULL)
    {
        printf("%c ", current->data);
        current = current->next;
    }
    printf("\n");
}


int main()
{
    Queue q;
    init(&q);
    int choice;
    char data;

    do
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter character to enqueue: ");
            scanf(" %c", &data);
            enqueue(&q, data);
            break;

        case 2:
            dequeue(&q);
            break;

        case 3:
            display(q);
            break;

        case 4:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
