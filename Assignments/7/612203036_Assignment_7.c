#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef Node *List;

typedef struct stack {
    List l;
    Node *top;
} Stack;

void initList(List *l) {
    *l = NULL;
    return;
}

void insert_begin(List *l, int d) {
    Node *nn = (Node *)malloc(sizeof(Node));
    if (nn) {
        nn->data = d;
        nn->next = NULL;
    } else {
        return;
    }
    nn->next = *l;
    *l = nn;
    return;
}

void delete_begin(List *l) {
    Node *p = *l;
    if (!p) {
        return;
    }
    *l = p->next;
    free(p);
    return;
}

int isEmptyList(List l) {
    if (!l)
        return 1;
    else
        return 0;
}

void initStack(Stack *s) {
    initList(&(s->l));
    s->top = NULL;
    return;
}

int isEmpty(Stack s) {
    if (s.top == NULL)
        return 1;
    else
        return 0;
}

void push(Stack *s, int d) {
    insert_begin(&(s->l), d);
    s->top = s->l;
    return;
}

int peek(Stack s) {
    if (isEmpty(s))
        return INT_MAX;
    else
        return ((s.top)->data);
}

int pop(Stack *s) {
    if (isEmpty(*s))
        return INT_MAX;
    int j = peek(*s);
    delete_begin(&(s->l));
    s->top = s->l;
    return j;
}

void display(Stack s) {
    if (isEmpty(s)) {
        printf("Stack is empty");
        return;
    }
    printf("[ ");
    Node *p = s.top;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("]\n");
    return;
}

int main() {
    Stack s;
    initStack(&s);
    int choice, data;

    do {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter integer to push: ");
            scanf("%d", &data);
            push(&s, data);
            break;

        case 2:
            data = pop(&s);
            if (data != INT_MAX)
                printf("Popped: %d\n", data);
            else
                printf("Stack is empty.\n");
            break;

        case 3:
            data = peek(s);
            if (data != INT_MAX)
                printf("Peek: %d\n", data);
            else
                printf("Stack is empty.\n");
            break;

        case 4:
            display(s);
            break;

        case 5:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}
