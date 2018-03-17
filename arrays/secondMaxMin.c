/*
	write a program to accept an array of 10 integers from user and print 2nd max and 2nd min number from it.
*/
#include<stdio.h>
int main()
{
	int SecondMax(int*);
	int SecondMin(int*);
	
	int a[10],i;
	
	printf("Enter the elements in an array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Second Maximum value is:%d\n",SecondMax(a));
	printf("Second Minimum value is:%d\n",SecondMin(a));
	
	return 0;
	
}

int SecondMax(int a[])
{
	int max = a[1], secondMax = a[0];
	
	if(a[0]>a[1])
	{
		max = a[0];
		secondMax = a[1];
	}
	
	for(int i=2;i<10;i++)
	{
		if(a[i]>max)
		{
			secondMax = max;
			max = a[i];
		}
		else if(a[i]>secondMax)
		{
			secondMax = a[i];
		}
	}
	return secondMax;
}

int SecondMin(int a[]) //  2 1 4 6 7 min = 1 sm = 2
{
	int min = a[1], secondMin = a[0];
	
	if(a[1]>a[0])
	{
		min = a[0];		
		secondMin = a[1];		  
	}
	
	for(int i=2;i<10;i++)
	{
		if(a[i]<min)
		{
			secondMin = min;
			min = a[i];
		}		
		else if(a[i]<secondMin)
		{
			secondMin = a[i];
		}
	}
	return secondMin;

}
