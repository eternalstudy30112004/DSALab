#include <stdio.h>
#include <stdlib.h>
#include "dll.h"
void init_ASCII(ASCII* head) {
    head->digitsList.front = NULL;
    head->digitsList.rear = NULL;
}

void ASCII_of(ASCII* head, char ch) {
    if (head->digitsList.front != NULL) {
        destroy(&head->digitsList);
    }

    int asciiValue = (int)ch;

    while (asciiValue > 0) {
        int digit = asciiValue % 10;
        node* newNode = (node*)malloc(sizeof(node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        newNode->data = digit;
        newNode->next = NULL;

        if (head->digitsList.front == NULL) {
            head->digitsList.front = newNode;
            head->digitsList.rear = newNode;
        } else {
            newNode->next = head->digitsList.front;
            head->digitsList.front->prev = newNode;
            head->digitsList.front = newNode;
        }

        asciiValue /= 10;
    }
}

void traverse(ASCII* head) {
    node* current = head->digitsList.front;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void destroy(list* head) {
    node* current = head->front;
    node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head->front = NULL;
    head->rear = NULL;
}
