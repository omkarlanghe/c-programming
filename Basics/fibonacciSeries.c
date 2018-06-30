#include<stdio.h>

int main()
{
	int limit;
	printf("Enter the limit for fibonnaci series:\n");
	scanf("%d",&limit);
	fibonnaciSeries(limit);
	
	return 0;
}

void fibonnaciSeries(int limit)
{
	int prev=0,num=1,next_num;
	
	printf("First %d fibonnaci numbers are: ",limit);
	printf("%d\n",prev);
	printf("%d\n",num);
	for(int i=0 ; i<=limit ; i++)
	{
		next_num = num+prev;
		printf("%d\n",next_num);
		prev = num;
		num = next_num;
	}
}
