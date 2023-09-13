#include <stdio.h>
int a = 10;
int b = 25;
void swap(){
    int temp = a;
    a = b;
    b = temp;

}
int main(){
    printf("Before swapping : \n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    swap();
    printf("After swapping : \n");

    printf("a: %d\n",a);
    printf("b: %d\n",b);


    return 0;
}