#include<stdio.h>
#include<stdlib.h>

void mergeArray(int *array1, int size1, int *array2, int size2, int *result);
void intersectArray(int *array1, int size1, int *array2, int size2, int *result);

int main()
{
	int *array1,*array2,size1,size2,*result;
	
	printf("enter the size 1 of the array:\n");
	scanf("%d",&size1);
	
	printf("Enter the size 2 of the array:\n");
	scanf("%d",&size2);
	
	array1 = (int *)malloc(size1*sizeof(int));
	array2 = (int *)malloc(size2*sizeof(int));
	
	printf("enter the %d elements for array-1:\n",size1);
	for(int i=0 ; i<size1 ; i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("enter the %d elements for array-2:\n",size2);
	for(int i=0 ; i<size2 ; i++)
	{
		scanf("%d",&array2[i]);
	}
	
	mergeArray(array1,size1,array2,size2,result);
	
	int resultsize = size1 + size2;
	
	printf("Merged array is :\n");
	for(int i=0 ; i<resultsize ; i++)
	{
		printf("%d\n",result[i]);
	}
	
	
	/*intersectArray(array1,size1,array2,size2,result);
	printf("Intersect Array is:\n");
	for(int i=0 ; i<resultsize ; i++)
	{
		printf("%d\n",result[i]);
	}
		
	*/
	free(array1);
	free(array2);
	
	return 0;
	
}

void mergeArray(int *array1, int size1, int *array2, int size2, int *result)
{
	int i=0,j=0,k=0;
	
	while(i<size1 && j<size2)
	{
		if(array1[i] < array2[j])
		{
			result[k] = array1[i];
			i++;
		}k++;
	}
	while(i<size1)
	{
		result[k++] = array1[i++];
	}
	while(j<size2)
	{
		result[k++] = array2[j++];
	}
}
/*
void intersectArray(int *array1, int size1, int *array2, int size2, int *result)
{
	int i=0,j=0,k=0;

	for(i=0 ; i<size1 ; i++)
	{
		for(j=0 ; j<size2 ; j++)
		{
			if(array1[i] == array2[j])
			{
				result[k++] = array1[i];
				break; 
			}
		}
	}
}*/
