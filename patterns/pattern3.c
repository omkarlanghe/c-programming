/*
	WAP to print the following pattern in C

	A
	BC
	DEF
	GHIJ
*/

#include<stdio.h>
void main(){
	int n;
	char c,ch='A';
	printf("Enter the number:\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<=i;j++)
		{
		printf("\t%c",ch);
		ch++;
		}
		 	
		printf("\n");
	}

}
