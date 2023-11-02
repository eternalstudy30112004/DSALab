typedef struct node{
    int data;
    int row;
    int column;
    struct node *next;
}node;

typedef node* list;

void init(list *head);
node * createNode(int,int,int);

void insert_end(list *head, int d, int row, int col);
void insert_beg(list *head, int d, int row, int col);
void delete_beg(list *head);
void delete_end (list *head);
void traverse(list head, int row, int col);






