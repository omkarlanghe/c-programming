#include<stdio.h>
#include<stdlib.h>

int CountOfSubarrays(int *, int, int);
int main()
{
	int *array = NULL, size, k;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);

	array = (int *)malloc(size*sizeof(int));

	printf("Enter the elements in an array:\n");
	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d",&array[i]);
	}

	printf("Enter the value of K:\n");
	scanf("%d",&k);

	int retVal = CountOfSubarrays(array, size, k);
	
	if(retVal > 0)
	{
		printf("number of subarrays having value strictly greater than K is %d\n", retVal);
	}
	else
	{
		printf("No such element present\n");
	}

	free(array);
	return 0;
}

int CountOfSubarrays(int *array, int size, int k)
{
	int countOfSubarrays = 0;
	
	for(int i = 0 ; i < size ; i++)
	{
		countOfSubarrays += array[i];
	}
	return(countOfSubarrays-k);
}
