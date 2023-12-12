typedef struct node{
    int data;
    struct node *next;
}node;

typedef node* SLL;

void init_SLL(SLL *head);
void append(SLL *head, int d);
void insert_beg(SLL *head,int d);
void delete_beg(SLL *head);
void delete_end (SLL *head);
void traverse(SLL head);
void reverse_even(SLL *head);

int is_palindrome(SLL *head);

void removeNode(SLL *head,node *nd);