typedef struct node{
	int d;
	struct node* next;

}node;

typedef node* circular;

void init(circular *l);
void insert_end(circular *l,  int d);
void insert_beg(circular *l,  int d);
void del_beg(circular *l);
void del_end(circular *l);
void traverse(circular l);



