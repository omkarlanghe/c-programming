/*

				1	
			1	2	1	
		1	2	3	2	1	
	1	2	3	4	3	2	1	

*/




#include<stdio.h>

int main()
{

	int n;
	printf("Enter the value:\n");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		//int t;
		int count = 1;
		
		for(int j=1;j<=n-i;j++)
			printf("\t");
			
		for(int j=1;j<=2*i-1;j++)
		{
			printf("%d\t",count);
			if(j>=i)
				count--;
			else
				count++;
			
		}			
		printf("\n");
	}

}
