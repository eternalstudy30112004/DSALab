#include "queue.c"

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
