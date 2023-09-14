/*
File Name:
Author: Shrida Kalamkar

*/

#include<stdio.h>

//Problem :

int main()
{

    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=((a>b)&&(a>c))?1:2;
    switch(d)
    {
    case 1:
        printf("%d is greatest \n",a);
        break;
    case 2:
        d=(b>c)?b:c;
        printf("%d is greatest \n",d);
        break;
    default:
        printf("Thank You");
    }
	return 0;

}
