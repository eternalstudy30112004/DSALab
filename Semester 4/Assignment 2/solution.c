#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct BinarySearchTree {
    int arr[MAX_SIZE];
    int size;
};

void init_bst(struct BinarySearchTree *bst) {
    bst->size = 0;
}

void insert_bst(struct BinarySearchTree *bst, int value) {
    if (bst->size == MAX_SIZE) {
        printf("Error: BST is full\n");
        return;
    }

    int index = 0;

    while (index < bst->size) {
        if (value < bst->arr[index]) {
            index = 2 * index + 1; // Move to the left child
        } else {
            index = 2 * index + 2; // Move to the right child
        }
    }

    bst->arr[index] = value;
    bst->size++;
}

void inorder_traverse(struct BinarySearchTree *bst, int index) {
    if (index < bst->size) {
        inorder_traverse(bst, 2 * index + 1); // Left child
        printf("%d ", bst->arr[index]);
        inorder_traverse(bst, 2 * index + 2
         ); // Right child
    }   
}

void preorder_traverse(struct BinarySearchTree *bst, int index) {
    if (index < bst->size) {
        printf("%d ", bst->arr[index]);
        preorder_traverse(bst, 2 * index + 1); // Left child
        preorder_traverse(bst, 2 * index + 2); // Right child
    }
}

void postorder_traverse(struct BinarySearchTree *bst, int index) {
    if (index < bst->size) {
        postorder_traverse(bst, 2 * index + 1); // Left child
        postorder_traverse(bst, 2 * index + 2); // Right child
        printf("%d ", bst->arr[index]);
    }
}

void levelwise(struct BinarySearchTree *bst) {
    for (int i = 0; i < bst->size; ++i) {

        printf("%d ", bst->arr[i]);
    }
}

int isComplete(struct BinarySearchTree *bst, int index, int size) {
    if (index >= size) {
        return 1;
    }

    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < size && bst->arr[leftChild] == -1) {
        return 0;
    }

    return isComplete(bst, leftChild, size) && isComplete(bst, rightChild, size);
}

int main() {
    struct BinarySearchTree bst;
    init_bst(&bst);

    insert_bst(&bst, 50);
    insert_bst(&bst, 30);
    insert_bst(&bst, 70);
    insert_bst(&bst, 20);
    insert_bst(&bst, 40);
    insert_bst(&bst, 60);
    insert_bst(&bst, 80);

    printf("Inorder Traversal: ");
    inorder_traverse(&bst, 0);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder_traverse(&bst, 0);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder_traverse(&bst, 0);
    printf("\n");

    printf("Levelwise Traversal: ");
    levelwise(&bst);
    printf("\n");

    if (isComplete(&bst, 0, bst.size)) {
        printf("The BST is a complete tree.\n");
    } else {
        printf("The BST is not a complete tree.\n");
    }

    return 0;
}