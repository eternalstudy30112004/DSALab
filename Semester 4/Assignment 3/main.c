#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#define MAX_EXPRESSION_LENGTH 100
typedef struct TreeNode {
    char val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* createNode(char val) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int precedence(char ch) {
    switch(ch){
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

TreeNode* buildTree(char* s, int start, int end) {
    if (start > end)
        return NULL;

    int minPrecedence = INT_MAX;
    int minPrecedenceIndex = -1;
    int level = 0;

    for (int i = start; i <= end; ++i) {
        if(s[i] == ' ')
            continue;
        else if (s[i] == '(')
            level++;
        else if (s[i] == ')')
            level--;
        else if (level == 0 && isOperator(s[i])) {
            int currentPrecedence = precedence(s[i]);
            if (currentPrecedence <= minPrecedence) {
                minPrecedence = currentPrecedence;
                minPrecedenceIndex = i;
            }
        }
    }

    if (minPrecedenceIndex == -1) {
        if (s[start] == '(' && s[end] == ')') {
            printf("Skipping parentheses from %d to %d\n", start, end);
            return buildTree(s, start + 1, end - 1);
        } else {
            TreeNode* operandNode = createNode(s[start]);
            printf("Creating operand node with value '%c'\n", s[start]);
            return operandNode;
        }
    }

    printf("Found operator '%c' at index %d with precedence %d\n", s[minPrecedenceIndex], minPrecedenceIndex, minPrecedence);

    TreeNode* root = createNode(s[minPrecedenceIndex]);
    // as lower in parse tree => higher is the precedenc fo that opearator
    printf("Creating root node with value '%c'\n", s[minPrecedenceIndex]);

    root->left = buildTree(s, start, minPrecedenceIndex - 1);
    printf("Building left subtree of '%c'\n", s[minPrecedenceIndex]);

    root->right = buildTree(s, minPrecedenceIndex + 1, end);
    printf("Building right subtree of '%c'\n", s[minPrecedenceIndex]);

    return root;
}

void Inorder(TreeNode* root) {
    if (root != NULL) {
        Inorder(root->left);
        printf("%c ", root->val);
        Inorder(root->right);
    }
}

int main() {
    char infix_expression[MAX_EXPRESSION_LENGTH];
    scanf("%s", infix_expression);
    int n = strlen(infix_expression);
    
    TreeNode* root = buildTree(infix_expression, 0, n - 1);

    printf("Infix traversal of the expression tree: ");
    Inorder(root);
    printf("\n");

    return 0;
}
