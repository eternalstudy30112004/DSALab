#include <stdio.h>
#define PI 3.14159
double circle(int r){
    return PI * r * r;
}
int main(){
    int r = 8;
    double area;
    area = circle(r);
    printf("Area of circle with radius %d is %f\n", r, area);
    return 0;
}