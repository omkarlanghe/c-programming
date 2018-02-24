/*
	Recursive funtion to check the prime number
*/

#include<stdio.h>

int main()
{
	int RecursiveIsPrime(int, int);
	int num;
	
	printf("Enter the number to check if it is prime or not:");
	scanf("%d",&num);
	
	int isPrime = RecursiveIsPrime(num,num/2);
	
	if((isPrime)==1)
	{
		printf("Number is Prime\n");
	}
	else
	{
		printf("Number is Not Prime\n");
	}
	
	return 0;

}

int RecursiveIsPrime(int num, int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
	
		if(num%i==0)
		{
			return 0;
		}
		else
		{
			return RecursiveIsPrime(num,i-1);
		}
		
	}
}
