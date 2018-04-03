#include<stdio.h>
#include<stdlib.h>

int AverageOfEven(int *array, int size);
int AverageOfOdd(int *array, int size);

int main()
{
	int *array;
	int size;
	
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	
	array = (int *)malloc(size*sizeof(int));
	
	printf("Enter the values in array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Average of Even numbers is:%d\n",AverageOfEven(array,size));
	printf("Average of Odd numbers is:%d\n",AverageOfOdd(array,size));
	
	free(array);
	
	return 0;
}
int AverageOfEven(int *array, int size)
{
	int evencount=0,oddcount=0;
	int sum=0;
	
	for(int i=0;i<size;i++)
	{
		if((array[i]&1)==0)
		{
			sum = sum + array[i];
		}
		
		if(array[i]&1)
		{
			oddcount++;
		}
		else
		{
			evencount++;
		}
	}
	
	int average = sum/evencount;
	return average;
}

int AverageOfOdd(int *array, int size)
{
	int evencount=0,oddcount=0;
	int sum=0;
	
	for(int i=0;i<size;i++)
	{
		if((array[i]&1)!=0)
		{
			sum = sum + array[i];
		}
		
		if(array[i]&1)
		{
			oddcount++;
		}
		else
		{
			evencount++;
		}
	}
	
	int average = sum/oddcount;
	return average;
}
