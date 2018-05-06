/*
	WAP to accept a number from user and check if it prime or not.
*/

#include<stdio.h>
int isPrime(int no);
int main(){

	int no;
	
	printf("Enter the number to check if it is prime or not:");
	scanf("%d",&no);
	
	if(isPrime(no))
	{
		printf("The number is Prime %d\n",isPrime(no));
	}
	else
	{
		printf("The number is not Prime %d\n",isPrime(no));
	}
}

int isPrime(int no)
{
	int flag=1;
	
	if(no%2==0)
	{
	 return flag=0;
	}
	else if(no!=3)
	{
		for(int i=3;i<(no/2+1);i=i+2)
		{
			if(no%i==0)
			{
				flag=0;
				break;
			}
		}
	
	}
	return flag;
	
}
