#include<stdio.h>
#include<stdlib.h>
int secondMax(int *array,int size);
int secondMin(int *array,int size);

int main()
{
	int *array;
	int size;
	
	printf("Enter the size if an array:\n");
	scanf("%d",&size);

	array = (int *)malloc(size*sizeof(int));
	
	printf("Enter the elements in an array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("2nd Maximum element in an array:%d\n",secondMax(array,size));
	printf("2nd Minimum element in an array:%d\n",secondMin(array,size));
	
	free(array);
	return 0;
}
int secondMax(int *array,int size)
{
	int max = array[1], secondmax = array[0];
	
	if(array[0]>array[1])
	{
		max = array[0];
		secondmax = array[1];
	}
	for(int i=2;i<size;i++)
	{
		if(array[i]>max)
		{
			secondmax = max;
			max = array[i];
		}
		else if(array[i]>secondmax)
		{
			secondmax = array[i];
		}	
	}
	return secondmax;
}
int secondMin(int *array,int size)
{
	int min = array[1], secondmin = array[0];
	
	if(array[1]>array[0])
	{
		min = array[0];
		secondmin = array[1];
	}
	for(int i=2;i<size;i++)
	{
		if(array[i]<min)
		{
			secondmin = min;
			min = array[i];
		}
		else if(array[i]<secondmin)
		{
			secondmin = array[i];
		}	
	}
	return secondmin;
}
