typedef struct node{
	int d;
	struct node* next;

}node;

typedef node* clist;

void init(clist *l);
void insert_end(clist *l,  int d);
void insert_beg(clist *l,  int d);
void del_beg(clist *l);
void del_end(clist *l);
void traverse(clist l);



