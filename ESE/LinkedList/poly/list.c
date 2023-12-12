#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
    int degree;
    int con;
    struct node* next; 
} node;

typedef node* list;

void init(list *SLL){
    *SLL = NULL;
    return;
}
node *createNode(int degree, int con){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->degree = degree;
    newNode->con = con;
    newNode->next = NULL;
    return newNode;
}

void append(list *SLL, int degree, int con){
    node *newNode = createNode(degree, con);
    node *p = *SLL;
    if(p == NULL){
        *SLL = newNode;
    }else{
        for(;p->next;p=p->next);
        p->next = newNode;
    }
    return;
}

void insert_beg(list *SLL, int degree, int con){
    node *newNode = createNode(degree, con);
    node *p = *SLL;
    if(p == NULL)
        p = newNode;
    else{
        p = newNode;
        p->next = *SLL;
        *SLL = p;
    }
    return;
}

void delete_beg(list *SLL){
    if(!(*SLL)) return;
    node *p = *SLL;
    *SLL = p->next;
    free(p);
    return;
}

void delete_end(list *SLL){
    if(!(*SLL))return;
    node *q, *p = *SLL;
    
    for(;p->next;p = p->next){
        q = p;
    }
    q->next = NULL;
    free(p);
    return;
}
// void swap(node *p, node *q){
//     int temp = p->data;
//     p->data = q->data;
//     q->data = temp;
// }
node* getNode(list *SLL, int i){
    node *p = *SLL;
    while(i > 0){
        p = p->next;
        i--;
    }
    return p;
}
int length(list SLL){
    node *p = SLL;
    int length  = 0;
    while(p){
        length++;
        p = p->next;
    }
    return length;
}
// void reverse(list *SLL, int start, int end){
//     // int start = 0;
//     // int end = length(*SLL) - 1;
//     node *p, *q;
//     printf("%d %d", start, end);
//     p = getNode(SLL, start);
//     while (start < end) 
//     {
//         q = getNode(SLL, end);
//         swap(getNode(SLL, start), getNode(SLL, end));
//         printf("%d %d %d %d",start, end,  p->data, q->data);
//         p = p->next;
//         start++;
//         end--;
//     }
    
// }

void traverse(list SLL){
    
    node *p =  SLL;
    printf("\n[");
    while(p){
        printf("%dx^%d ", p->con, p->degree);
        p = p->next;
    }
    printf("]\n");
    return;
}

// void reverse_even(list *SLL){
//     node *p = *SLL;
//     int i = 0, j = -1;
//     while(p){
//         if(p->data % 2 == 0){
//             if(j == -1){
//                 j = i;
//             }
//         }else{
//             if(j != i && j!=-1){
//                 reverse(SLL, j, i);
//             }
//             j = -1;
//         }
//         p = p->next;
//     }
// }
// void reverse_n(list *SLL){
//     node *head, *current,*next, *prev;
//     head = *SLL;
//     if(!(head->next)){
//         return;
//     }
//     prev = NULL;
//     next = NULL;
//     current = head;
//     while(current){
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     *SLL = prev;

//     return;

// }

void destroy(list *SLL){
    node *p = *SLL;
    node *q;
    while(p){
        q = p;
        p = p->next;
        free(q);
    }
    *SLL = NULL;
}