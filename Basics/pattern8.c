/*
				A	
			B	A	B	
		C	B	A	B	C	
	D	C	B	A	B	C	D	
E	D	C	B	A	B	C	D	E	

*/

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
	
	int ch = 64+i;
	int  count = 1;
	
		for(int j=1;j<=n-i;j++)
		{
			printf("\t");
		}
		
		for(int j=1;j<=2*i-1;j++)
		{
			printf("%c\t",ch);
			
			if(j<i)
			{
				ch--;
			}
			else
			{
				ch++;
			}
		}
		printf("\n");
	}
}
