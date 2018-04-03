#include<stdio.h>
#include<stdlib.h>

int averageSum(int *array, int n);
int main()
{
	int *array;
	int n;
	
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	
	array = (int *)malloc(n*sizeof(int));
	
	printf("Enter the values:\n");
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Average is:%d\n",averageSum(array,n));
	
	free(array);
	return 0;
}

int averageSum(int *array, int n)
{
	int sum=0;
	int avg;
	
	for(int i=0;i<n;i++)
	{
		sum = sum + array[i];
		avg = sum/n;
		
	}
	return avg;
}

