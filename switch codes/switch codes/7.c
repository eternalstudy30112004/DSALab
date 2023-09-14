/*
File Name:
Author: Shrida Kalamkar

*/

#include<stdio.h>

//Problem :

int main(){
	int k, j = 2 ;
	switch(k=j-2)
	{
		case 0 :
			printf("\nTailor") ;
		case 1 :
			printf("\nTutor") ;
		case 2 :
			printf("\nTramp") ;
		default :
			printf("\n Simple !") ;
	}  //end of switch
	return 0;
}       //end of main
