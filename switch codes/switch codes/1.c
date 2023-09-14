/*
File Name:
Author: Shrida Kalamkar

*/

// There is no break in all cases
#include <stdio.h>
int main(){
   int x = 7;
   switch(x)
   {
       default: printf("Choice other than 1, 2 and 3\n");
       case 1: printf("Choice is 1\n");
       case 2:
           printf("Choice is 2\n");
           break;
       case 3: printf("Choice is 3\n");

   }
   printf("Thank You..");
   return 0;
}
