#include<stdio.h>
#include<stdlib.h>
int reverseFunction(int *array,int size);
int main()
{
	int *array;
	int size;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	
	array = (int *)malloc(size*sizeof(int));
	
	printf("Enter the elements in an array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("\n");
	reverseFunction(array,size);
	
	free(array);	
	return 0;
}
int reverseFunction(int *array,int size)
{
	for(int i=size;i>=0;i--)
	{
		printf("%d\n",array[i]);
	}
	
}
