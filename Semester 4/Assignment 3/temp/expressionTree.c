#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
	char data;
	struct node* left;
	struct node* right;
	struct node* next;
};
struct node *head=NULL;
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(char data)
{// Function to return precedence of operators
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 
// Function to return associativity of operators
char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L'; // Default to left-associative
}
 
// The main function to convert infix expression to postfix expression
void infixToPostfix(char s[]) {
    char result[1000];
    int resultIndex = 0;
    int len = strlen(s);
    char stack[1000];
    int stackIndex = -1;
 
    for (int i = 0; i < len; i++) {
        char c = s[i];
 
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result[resultIndex++] = c;
        }
        else if (c == '(') {
            stack[++stackIndex] = c;
        }
    
        else if (c == ')') {
            while (stackIndex >= 0 && stack[stackIndex] != '(') {
                result[resultIndex++] = stack[stackIndex--];
            }
            stackIndex--; 
        }
        else {
            while (stackIndex >= 0 && (prec(s[i]) < prec(stack[stackIndex]) ||
                                       prec(s[i]) == prec(stack[stackIndex]) &&
                                           associativity(s[i]) == 'L')) {
                result[resultIndex++] = stack[stackIndex--];
            }
            stack[++stackIndex] = c;
        }
    }
 
    while (stackIndex >= 0) {
        result[resultIndex++] = stack[stackIndex--];
    }
 
    result[resultIndex] = '\0';
    printf("%s\n", result);
}
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->next = NULL;
	
	return (node); 
}
void printInorder(struct node* node)
{
	if (node == NULL)
		return;
	else{
	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	printf("%c ", node->data);

	/* now recur on right child */
	printInorder(node->right);
	}
}

void push(struct node* x)
{
	if(head==NULL)
	head = x;
	else
	{
		(x)->next = head;
		head = x;
	}
	// struct node* temp;
	// while(temp!=NULL)
	// {
	//	 printf("%c ", temp->data);
	//	 temp = temp->next;
	// }
}
struct node* pop()
{
	// Popping out the top most[ pointed with head] element
	struct node* p = head;
	head = head->next;
	return p;
}
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 
char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L'; // Default to left-associative
}
 
void infixToPostfix(char s[]) {
    char result[1000];
    int resultIndex = 0;
    int len = strlen(s);
    char stack[1000];
    int stackIndex = -1;
 
    for (int i = 0; i < len; i++) {
        char c = s[i];
 
        // If the scanned character is an operand, add it to the output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result[resultIndex++] = c;
        }
        // If the scanned character is an ‘(‘, push it to the stack.
        else if (c == '(') {
            stack[++stackIndex] = c;
        }
        // If the scanned character is an ‘)’, pop and add to the output string from the stack
        // until an ‘(‘ is encountered.
        else if (c == ')') {
            while (stackIndex >= 0 && stack[stackIndex] != '(') {
                result[resultIndex++] = stack[stackIndex--];
            }
            stackIndex--; // Pop '('
        }
        // If an operator is scanned
        else {
            while (stackIndex >= 0 && (prec(s[i]) < prec(stack[stackIndex]) ||
                                       prec(s[i]) == prec(stack[stackIndex]) &&
                                           associativity(s[i]) == 'L')) {
                result[resultIndex++] = stack[stackIndex--];
            }
            stack[++stackIndex] = c;
        }
    }
 
    // Pop all the remaining elements from the stack
    while (stackIndex >= 0) {
        result[resultIndex++] = stack[stackIndex--];
    }
 
    result[resultIndex] = '\0';
    printf("%s\n", result);
}
int main()
{
	char s[1000];
	scanf("%s", s);
	int i = 0;
	infixToPostfix(s);

	int l = sizeof(s) / sizeof(s[0]) ;
	struct node *x, *y, *z;
	for (int i = 0; i < l; i++) {
		
		if (s[i] == '+' || s[i] == '-' || s[i] == '*'
			|| s[i] == '/' || s[i] == '^') {
			z = newNode(s[i]);
			x = pop();
			y = pop();
			z->left = y;
			z->right = x;
			push(z);
		}
		else {
			z = newNode(s[i]);
			push(z);
		}
	}
	printf(" The Inorder Traversal of Expression Tree: ");
	printInorder(z);
	return 0;
}
