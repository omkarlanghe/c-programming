#include<stdio.h>
#include<stdlib.h>
int Maximum(int *array, int size);
int Minimum(int *array, int size);
int main()
{
	int *array;
	int size;
	
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	
	array = (int *)malloc(size*sizeof(int));
	
	printf("Enter the elements in an array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Maximum element in array is:%d\n",Maximum(array,size));
	printf("Minimum element in array is:%d\n",Minimum(array,size));
	
	free(array);
	return 0;
}

int Maximum(int *array, int size)
{
	int max;
	
	max = array[0];
	
	for(int i=1;i<size;i++)
	{
		if(max<array[i])
		{
			max = array[i];
		}
	}
	return max;
}
int Minimum(int *array, int size)
{
	int min;
	
	min = array[0];
	
	for(int i=1;i<size;i++)
	{
		if(min>array[i])
		{
			min = array[i];
		}
	}
	return min;
}
