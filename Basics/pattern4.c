/*
	WAP to print the following pattern in C

	   *
	  **
	 ***
	****
*/

#include<stdio.h>
void main(){
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);

	for(int i=0;i<=n;i++)//newline
	{
		for(int k=n;k>i;k--)//spaces
		printf(" ");
			 
		for(int j=0;j<=i;j++)//printing pattern
		{
		printf("*");
		}	 	
	printf("\n");
	}

}
