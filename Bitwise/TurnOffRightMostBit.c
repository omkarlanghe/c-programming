/*
	Write a program to Turn off the right most bit of the given number
*/


#include<stdio.h>

int main()
{	
	int RightMostOneBitPosition(int);
	int no;
	printf("Enter the number:\n");
	scanf("%d",&no);
	printf("%d\n",RightMostOneBitPosition(no));
}

int RightMostOneBitPosition(int no)
{
	return no&(no-1);
}
