#include<stdio.h>
#include<stdlib.h>

int intPallidromeUsingMalloc(int *arr, int size);
int main()
{
	int *arr;
	int size;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	
	arr = (int *)malloc(size*sizeof(int));
	
	printf("Enter the number:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	int result = intPallidromeUsingMalloc(arr,size);
	
	if(result==0)
	{
		printf("pallidrome\n");
	}
	else
	{
		printf("not pallidrome\n");
	}
	
	free(arr);
	return 0;
}
int intPallidromeUsingMalloc(int *arr, int size)
{
	int flag =0;
	for(int i=0,j=size-1;i<size/2;i++,j--)
	{
		if(arr[i]!=arr[j])
		{
			flag = 1;
			break;
		}
	}
	return flag;
}


