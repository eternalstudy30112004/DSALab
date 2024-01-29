typedef struct stack{
    int *data;
    int size;
    int top;
} stack;

void init( stack *s, int size) ;

int top(stack *s);
int isFull(stack *s);
void push(stack *s, int x);

int isEmpty(stack *s);
void pop(stack *s);

void print(stack s);