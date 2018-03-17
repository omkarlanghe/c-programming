/*
	Write a program to accept an array of 10 integers and display the average of even numbers and odd numbers out of them.
*/

#include<stdio.h>

int main()
{

	int evenSum(int*);
	int oddSum(int*);

	int a[10],i,count;
	int sum=0;

	printf("Enter the elements in the array:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	printf("Average of Even Elements in an array is:%d\n",evenSum(a));
	printf("Average of Odd Elements in an array is:%d\n",oddSum(a));

return 0;	

}

int evenSum(int a[])
{
	int i;
	int evencount=0,oddcount=0;
	int sum=0;
	
	for(i=0;i<10;i++)
	{
		
		if((a[i]&1)==0)
		{
			sum = sum + a[i];
		}
		
		if(a[i]&1)
		{
			oddcount++;
		}
		else
		{
			evencount++;
		}	
	}
	
	int avg = sum/evencount;
	return avg;
}

int oddSum(int a[])
{
	int i;
	int sum=0,evencount=0,oddcount=0;
	
	for(i=0;i<10;i++)
	{
		if((a[i]&1)!=0)
		{
			sum = sum + a[i];
		}

		if(a[i]&1)
		{
			oddcount++;
		}
		else
		{
			evencount++;
		}	

	}
	
	int avg = sum/oddcount;
	return avg;
}
