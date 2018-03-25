/*
	write a program to swap to numbers using pointers.
*/
#include<stdio.h>

int main()
{
	int no1,no2;
	
	printf("Enter first number:\n");
	scanf("%d",&no1);
	
	printf("Enter second number:\n");
	scanf("%d",&no2);
	
	swapByValue(no1,no2);
	printf("%d %d\n",no1,no2);
	
	swapByReference(&no1,&no2);
	printf("%d %d\n",no1,no2);
	return 0;
}

void swapByValue(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

void swapByReference(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
