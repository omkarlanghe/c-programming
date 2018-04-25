#include<stdio.h>

int main()
{
	int year;
	
	printf("Enter the year to check:\n");
	scanf("%d",&year);
	
	if((year%400)==0)
	{
		printf("Leap Year\n");
	}
	else if((year%100)==0)
	{
		printf("Not a leap year\n");
	}
	else if((year%4)==0)
	{
		printf("Leap Year\n");
	}
	else
	{
		printf("Not a Leap year\n");
	}
	
	return 0;
}
