/*
File Name:
Author: Shrida Kalamkar

*/

#include<stdio.h>

//Problem :

int main(){
    char grade = 'B';
    switch(grade)
    {
        case 'A' :
            printf("Excellent!\n" );
            break;
        case 'B' :
            printf("Well done\n" );
            break;
        case 'D' :
            printf("You passed\n" );
            break;
        default :
            printf("Invalid grade\n" );
   }
   printf("Your grade is  %c\n", grade );
   return 0;

}
