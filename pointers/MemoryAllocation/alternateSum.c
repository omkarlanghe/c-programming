/*
	write a program to accept an array of 10 integers from user and display difference of alternative sum of the elements.
*/

#include<stdio.h>
#include<stdlib.h>
int diffOfAltSumOfElements(int *a,int size);
int main()
{

	int *a;
	int i,size;
	
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	
	a = (int *)malloc(size*sizeof(int));
	printf("Enter the elements in an array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Difference of Altenative Sum of the elements is:%d\n",diffOfAltSumOfElements(a,size));
	
	free(a);
	return 0;
}

int diffOfAltSumOfElements(int *a, int size)
{
	int i,difference;
	int firstsum=0,secondsum=0;
	for(i=0;i<size;i=i+2)
	{
		firstsum = firstsum+a[i];
	}
	for(i=1;i<size;i=i+2)
	{
		secondsum = secondsum+a[i];
	}
	
	if(firstsum>secondsum)
	{
		difference = firstsum - secondsum;
	}
	else
	{
		difference = secondsum - firstsum;
	}
	
	return difference;
}
