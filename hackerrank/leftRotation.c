#include<stdio.h>
#include<stdlib.h>

void leftRotation(int *, int, int);
void leftRotateByOneEle(int *, int);
void printArray(int *, int);

int main()
{
	int *arr, size, value;
	printf("Enter the size of an array\n");
	scanf("%d",&size);

	arr = (int *)malloc(size*sizeof(int));
	
	printf("Enter the elements in an array\n");
	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter rotation value to rotate left\n");
	scanf("%d",&value);

	leftRotation(arr, size, value);
	printArray(arr, size);
	free(arr);
	return 0;
}

void leftRotation(int *arr, int size, int value)
{
	for(int i = 0 ; i < value ; i++)
	{
		leftRotateByOneEle(arr, size);
	}
}

void leftRotateByOneEle(int *arr, int size)
{
	int temp = arr[0], i;
	for(i = 0 ; i < size - 1 ; i++)
	{
		arr[i] = arr[i+1];
	}
	
	arr[i] = temp;
}

void printArray(int *arr, int size)
{
	printf("Element after left rotation\n");
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d\n",arr[i]);
	}
}

