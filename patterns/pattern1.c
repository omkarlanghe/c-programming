/*
	WAP to print the following pattern in C
	*
	**
	***
	****
	*****
	******
*/




#include<stdio.h>

int main(){
	pattern();
}

void pattern(int n)
{
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++)
	{ //loop for row
		for(int j=0;j<=i;j++)
		{//loop for column
		
			printf("*");
		
		}
		printf("\n");
	}
}
