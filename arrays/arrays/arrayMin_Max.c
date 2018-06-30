/*
	write a program to accept an array of 10 integers and print maximum and minimum element out of them.
*/

#include<stdio.h>

int main()
{
	int arrayMax(int*);
	int arrayMin(int*);
	
	int a[10],i;
	printf("Enter the elements in the array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Maximum element in an array is: %d\n",arrayMax(a));
	printf("Minimum element in an array is: %d\n",arrayMin(a));
return 0;
}

int arrayMax(int a[])
{
	int i,max;
	
	max = a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int arrayMin(int a[])
{
	int i,min;
	
	min = a[0];
	for(i=1;i<10;i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
	}
	return min;
}
