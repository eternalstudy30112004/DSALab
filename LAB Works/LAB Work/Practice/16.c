#include <stdio.h>

int main(){
    int units;
    double cost = 0;
    scanf("%d", &units);
    while(units > 0){
        if (units > 250){

            cost += 1.50 * (units - 250);
            printf("\n%5d %5d \t%7f",units, (units - 250), 1.50 * (units - 250));
            units = 250;
        }
        else if(units > 150){
            cost += 1.20 * (units - 150);
            printf("\n%5d %5d \t%7f",units,(units - 150), 1.20 * (units - 150));

            units = 150;
        }else if (units > 50){
            cost += .75 * (units - 50);
            printf("\n%5d %5d \t%7f",units,(units - 50), .75 * (units - 50));

            units = 50;

        }else{
            printf("\n%5d %5d \t%7f",units,(units), .50 * (units));

            cost += .50 * 50;
            units = 0;
        }
    }
    printf("\n20 surpass charge %7f\n", cost*.20);
    cost *= 1.20;
    int a = printf("0");
    printf("%d", a);
    printf("\nThe electricity bill comes out to be %7f\n", cost);
    return 0;
}