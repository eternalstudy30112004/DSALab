/*
File Name:
Author: Shrida Kalamkar

*/

#include<stdio.h>

//Problem :

int main(){
    int i = 1;
    int ch = 'a' + 'b';
	switch(ch)
	{
		case 'a' :
		case 'b' :
			printf ( "\nYou entered b" ) ;
		case 'A' :
			printf ( "\n a as in apple" ) ;
		case 'b' + 'a' :
			printf ( "\nYou entered a and b" ) ;
	}
	return 0;
}
