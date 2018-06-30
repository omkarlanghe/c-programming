#include<stdio.h>

int main()
{
	int array1[10],array2[10],result[20];
	int size1,size2,resultSize;
	
	printf("Welcome to merge,Enter size of 2 sorted arrays to be merged:\n");
	scanf("%d%d",&size1,&size2);
	
	printf("Enter %d elements(sorted) of first array:\n",size1);
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("Enter %d elements(sorted) of second array:\n",size2);
	for(int i=0;i<size2;i++)
	{
		scanf("%d",&array2[i]);
	}
	
	Merge(array1,size1,array2,size2,result);
	
	resultSize = size1 + size2;
	
	printf("Merged array is:\n");
	for(int i=0;i<resultSize;i++)
	{
		printf("%d\n",result[i]);
	}
	
	return 0;
	
}

void Merge(int array1[], int size1,int array2[], int size2, int result[])
{
	int i=0,j=0,k=0;
	while(i<size1 && j<size2)
	{
		if(array1[i] < array2[j])
		{
			result[k] = array1[i];
			i++;
		}
		else
		{
			result[k]=array2[j];
			j++;
		}
		k++;
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
