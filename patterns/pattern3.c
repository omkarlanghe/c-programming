/*
A
AB
ABC
ABCD
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
