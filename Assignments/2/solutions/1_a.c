#include <stdio.h>

int main(){
    int sum, n = 100;
    printf("The sum of first %d Natural numbers is : ", n);
    while(n > 0){
        sum += n--;
    }
    printf("%d\n", sum);
    return 0;
}