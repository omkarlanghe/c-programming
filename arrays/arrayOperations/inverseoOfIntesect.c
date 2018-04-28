#include<stdio.h>

int main()
{
	//int InverseOfIntersect(int,int,int,int,int);
	
	int array1[10],array2[10],result[20];
	int size1,size2,resultSize;
	
	printf("Enter the size of array1 and array2:\n");
	scanf("%d%d",&size1,&size2);
	
	printf("Enter the elements in array1[]:\n");
	for(int i=0;i<size1;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("Enter the elements in array2[]:\n");
	for(int i=0;i<size2;i++)
	{
		scanf("%d",&array2[i]);
	}
	
	InverseOfIntersect(array1,size1,array2,size2,result);
	
	resultSize = size1+size2;
	
	printf("Intersection of array is:\n");
	for(int i=0;i<resultSize;i++)
	{
		printf("%d\n",result[i]);
	}
	
	return 0;
	
	
}

int InverseOfIntersect(int array1[],int size1,int array2[],int size2[],int result[])
{
	int i=0,j=0,k=0,count=0;
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(array1[i]==array2[j])
			{
				array2[j] = -1;
				break;
			}
		}
		if(j==size2)
		{
			result[k++] == array2[j];
			count++;
		}
	}
	return count;
}
