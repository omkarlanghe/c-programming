#include<stdio.h>
#include<stdlib.h>

void SumOfDigitsOfElement(int *, int);

int main()
{
	int *array, size;

	printf("Enter the size of an array:\n");
	scanf("%d",&size);

	array = (int *)malloc(size*sizeof(int));

	printf("Enter the elements in array:\n");
	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d",&array[i]);
	}
	SumOfDigitsOfElement(array,size);
	free(array);
	return(0);
}

void SumOfDigitsOfElement(int *array, int size)
{
	int temp = 0;
	int rem = 0,sum = 0,arraysum = 0;
	for(int i = 0 ; i < size ; i++)
	{
		temp = array[i];
		
		while(temp!=0)
		{
			rem = temp%10;
			sum = sum + rem;
			temp = temp/10;
		}
		arraysum = arraysum + array[i];
	}
	printf("Addition based on individual element of the index is: %d\n",arraysum);
	printf("Addition based on digits of individual element is %d\n ",sum);
}
