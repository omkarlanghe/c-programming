/*
	Write a program to display prime number in a given range
*/
/*
	write a program to display prime numbers in a given range.
*/


#include<stdio.h>

int main()
{
	int primeRange(int min, int max);
	int min,max;
	
	printf("Enter the min limit:\n");
	scanf("%d",&min);
	printf("Enter the max limit:\n");
	scanf("%d",&max);
	
	primeRange(min,max);
	
}

int primeRange(int min, int max)
{
	int n;
	
	for(n=min;n<max;n++)
	{
		int flag = 1;
		
		for(int i=2;i<n/2;i++)
		{
			if(n%i==0)
			{
				flag = 0;
				break;
			}
		
		}
		if(flag)
			printf("Prime Numbers are:%d\n",n);	
	}

}
