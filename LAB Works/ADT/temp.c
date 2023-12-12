#include <stdio.h>
typedef struct n{
    int k;
} n;
void f(n *p){
    printf("%p", p);

}
int main(){
     n k;
    printf("%p", &k);
    f(&k);
    return 0;
}