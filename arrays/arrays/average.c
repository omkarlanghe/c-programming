/*
	write a program to accept an array of 10 integers from user and print average if the same.
*/
#include<stdio.h>

int main()
{
	int average(int*);
	int a[10],i;
	int sum=0;
	
	printf("Enter the elements in the array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Average of total elements of an array is:%d\n",average(a));
	
	return 0;
}

int average(int a[])
{
	int i,avg;
	int sum=0;
	
	for(i=0;i<10;i++)
	{
		sum = sum + a[i];
		avg = sum/10;

	}
	
	return avg;

}
