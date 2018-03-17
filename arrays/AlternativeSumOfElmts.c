/*
	write a program to accept an array of 10 integers from user and display difference of alternative sum of the elements.
*/

#include<stdio.h>
int main()
{
	int diffOfAltSumOfElements(int*);
	int a[10],i;
	
	printf("Enter the elements in an array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Difference of Altenative Sum of the elements is:%d\n",diffOfAltSumOfElements(a));
	
	return 0;
}

int diffOfAltSumOfElements(int a[])
{
	int i,difference;
	int firstsum=0,secondsum=0;
	for(i=0;i<10;i=i+2)
	{
		firstsum = firstsum+a[i];
	}
	for(i=1;i<10;i=i+2)
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
