#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct node {
    char name[50];
    int bf;
    struct node *left, *right, *parent;
} node;

typedef struct node *AVL;

void initAVL(AVL *root) {
    *root = NULL;
    printf("AVL tree initialized.\n");
}

struct node *minfinder(node *t) {
    if (t == NULL)
        return NULL;
    else if (t->left != NULL)
        return minfinder(t->left);
    return t;
}

int height(AVL root) {
    if (root == NULL)
        return -1;
    else {
        int lh = height(root->left);
        int rh = height(root->right);

        if (lh > rh)
            return lh + 1;
        else
            return rh + 1;
    }
}

void adjustBF(AVL *t) {
    node *p = *t;
    while (p) {
        p->bf = height(p->left) - height(p->right);
        p = p->parent;
    }
}

void LL(AVL *root, node *n) {
    node *temp = n->left;
    n->left = temp->right;
    if (n->left)
        n->left->parent = n;
    temp->right = n;
    temp->parent = n->parent;
    n->parent = temp;
    if (temp->parent) {
        if (temp->parent->left == n)
            temp->parent->left = temp;
        else
            temp->parent->right = temp;
    } else
        *root = temp;

    adjustBF(&n);
    adjustBF(&temp);
}

void RR(AVL *root, node *n) {
    node *temp = n->right;
    n->right = temp->left;
    if (n->right)
        n->right->parent = n;
    temp->left = n;
    temp->parent = n->parent;
    n->parent = temp;
    if (temp->parent) {
        if (temp->parent->left == n)
            temp->parent->left = temp;
        else
            temp->parent->right = temp;
    } else
        *root = temp;

    adjustBF(&n);
    adjustBF(&temp);
}

void RL(AVL *root, node *n) {
    RR(root, n->left);
    LL(root, n);
}

void LR(AVL *root, node *n) {
    LL(root, n->right);
    RR(root, n);
}

void adjustImbalance(AVL *root, node *n) {
    while (n) {
        n->bf = height(n->left) - height(n->right);
        if (n->bf < -1) {
            if (n->right->bf <= 0)
                RR(root, n);
            else
                LR(root, n);
        } else if (n->bf > 1) {
            if (n->left->bf >= 0)
                LL(root, n);
            else
                RL(root, n);
        }
        n = n->parent;
    }
}

struct node *createnode(char name[]) {
    node *nn = (node *)malloc(sizeof(node));
    nn->left = NULL;
    nn->right = NULL;
    nn->parent = NULL;
    strcpy(nn->name, name);
    return nn;
}

void insertNode(AVL *root, char name[]) {
    node *nn = createnode(name);
    if (*root == NULL) {
        *root = nn;
        printf("Node inserted: %s\n", name);
        return;
    }
    node *p = *root;
    node *q = NULL;
    while (p) {
        q = p;
        if (strcmp(name, p->name) < 0)
            p = p->left;
        else if (strcmp(name, p->name) > 0)
            p = p->right;
        else {
            printf("Node already exists: %s\n", name);
            free(nn);
            return;
        }
    }
    if (strcmp(name, q->name) < 0)
        q->left = nn;
    else
        q->right = nn;

    nn->parent = q;
    adjustBF(&nn);
    adjustImbalance(root, nn->parent);
    printf("Node inserted: %s\n", name);
}

void deleteNode(AVL *root, char name[]) {
    if (*root == NULL) {
        printf("Tree is empty, cannot delete.\n");
        return;
    }

    node *p = *root;
    node *q = NULL;

    while (p) {
        if (strcmp(name, p->name) == 0)
            break;
        q = p;
        if (strcmp(name, p->name) < 0)
            p = p->left;
        else if (strcmp(name, p->name) > 0)
            p = p->right;
    }
    if (p == NULL) {
        printf("No such node exists in the tree: %s\n", name);
        return;
    }

    if (p->left == NULL && p->right == NULL) {
        if (q->left == p) {
            free(p);
            q->left = NULL;
        } else {
            free(p);
            q->right = NULL;
        }
    } else if (p->left != NULL && p->right == NULL) {
        if (q->left == p) {
            p->left->parent = q;
            q->left = p->left;
            free(p);
        } else {
            q->right = p->left;
            p->left->parent = q;
            free(p);
        }
    } else if (p->left == NULL && p->right != NULL) {
        if (q->left == p) {
            q->left = p->right;
            p->right->parent = q;
            free(p);
        } else {
            q->right = p->right;
            p->right->parent = q;
            free(p);
        }
    } else {
        node *temp = minfinder(p->right);
        strcpy(p->name, temp->name);
        deleteNode(&p->right, temp->name);
    }
    printf("Node deleted: %s\n", name);
}

void inorder(AVL t) {
    if (t == NULL)
        return;
    else {
        inorder(t->left);
        printf("Name: %s, Balance Factor: %d\n", t->name, t->bf);
        inorder(t->right);
    }
}

void preorder(AVL t) {
    if (t == NULL)
        return;
    else {
        printf("Name: %s, Balance Factor: %d\n", t->name, t->bf);
        preorder(t->left);
        preorder(t->right);
    }
}

void postorder(AVL t) {
    if (t == NULL)
        return;
    else {
        postorder(t->left);
        postorder(t->right);
        printf("Name: %s, Balance Factor: %d\n", t->name, t->bf);
    }
}

void deleteTree(node *root) {
    if (root == NULL)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}
int main() {
    AVL t;
    int choice = 0;
    char name[50];
    printf("Welcome to AVL Tree Management System.\n");
    printf("-------------------------------------\n");
    printf("Enter 1 to initialize the tree.\n");
    printf("Enter 2 to insert a node in the tree.\n");
    printf("Enter 3 to remove a node from the tree.\n");
    printf("Enter 4 for inorder traversal.\n");
    printf("Enter 5 for preorder traversal.\n");
    printf("Enter 6 for postorder traversal.\n");
    printf("Enter 7 for deleting the tree.\n");
    printf("Enter 8 for help.\n");
    printf("Enter 0 to quit the menu.\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
        case 0:
            printf("Exiting AVL Tree Management System. Goodbye!\n");
            break;

        case 1:
            initAVL(&t);
            break;

        case 2:
            printf("Enter the name of the student to insert: ");
            scanf("%[^\n]s", name);
            insertNode(&t, name);
            break;

        case 3:
            printf("Enter the name of the student to delete: ");
            scanf("%[^\n]s", name);
            deleteNode(&t, name);
            break;

        case 4:
            printf("Inorder traversal:\n");
            inorder(t);
            break;

        case 5:
            printf("Preorder traversal:\n");
            preorder(t);
            break;

        case 6:
            printf("Postorder traversal:\n");
            postorder(t);
            break;

        case 7:
            printf("Deleting the tree...\n");
            deleteTree(t);
            t = NULL;
            printf("Tree deleted successfully.\n");
            break;

        case 8:
            printf("Help - Instructions:\n");
            printf("--------------------\n");
            printf("1. Enter 1 to initialize the tree.\n");
            printf("2. Enter 2 to insert a node in the tree.\n");
            printf("3. Enter 3 to remove a node from the tree.\n");
            printf("4. Enter 4 for inorder traversal.\n");
            printf("5. Enter 5 for preorder traversal.\n");
            printf("6. Enter 6 for postorder traversal.\n");
            printf("7. Enter 7 for deleting the tree.\n");
            printf("8. Enter 8 for help.\n");
            printf("0. Enter 0 to quit the menu.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}