/*
	write a program to accept an array of 10 integers from user and print its Reverse.
*/
#include<stdio.h>
int main()
{
	int arrayReverse(int*);
	int a[10],i;
	
	printf("Enter the elements in an array:\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);		
	}
	
	arrayReverse(a);	

return 0;

}
int arrayReverse(int a[])
{
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Original elements in an array are:%d\n",a[i]);
	}
	
	printf("\n");
	
	for(i=9;i>=0;i--)
	{
		printf("Reversed elements in an array are:%d\n",a[i]);
	}

return 0;

}

