#include<stdio.h>
int main()
{
	int arr1[10],arr2[10],result[20],resultSize;
	int size1,size2;
	
	printf("Enter the size for array1 and array2:\n");
	scanf("%d%d",&size1,&size2);	
	
	printf("Enter the elements in array1[]:\n");
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the elements in array2[]:\n");
	for(int i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	Intersect(arr1,size1,arr2,size2,result);
	
	resultSize = size1+size2;
	printf("Intersection of array is:\n");
	for(int i=0;i<resultSize;i++)
	{
	printf("Intersected array is:%d\n",result[i]);
	}
	
	
}

void Intersect(int arr1[], int size1, int arr2[], int size2, int result[])
{
	int i=0,j=0,k=0;
	int count=0;
	
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(arr1[i]==arr2[j])
			{	
				result[k++] = arr1[i];
				count++;
				break;
			}
		}
	}
	return count;
}
