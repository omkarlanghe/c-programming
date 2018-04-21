/*
					A	
				A	B	A	
			A	B	C	B	A	
		A	B	C	D	C	B	A	
	A	B	C	D	E	D	C	B	A	

*/



#include<stdio.h>

int main()
{

	int n;
	printf("Enter the value:\n");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		int ch = 64;
		int count = 1;
		
		for(int j=1;j<=n-i;j++)
			printf("\t");
			
		for(int j=1;j<=2*i-1;j++)
		{
			printf("%c\t",ch+count);
			
			if(j>=i)
				count--;
			else
				count++;
			
		}			
		printf("\n");
	}

}
