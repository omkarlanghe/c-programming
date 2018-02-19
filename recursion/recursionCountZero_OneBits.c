/*
	
	Write a recursive funtion which will return the count of number of 0's and 1's Bits in a 		given number
	
*/

#include<stdio.h>
int main()
{

	int no,x;
	printf("Enter the number:\n");
	scanf("%d",&no);

	printf("Count of Number of Zero Bits is:%d\n",recursiveCountNumberOfZero(no,x));
	printf("Count of Number of Ones Bits is:%d\n",recursiveCountNumberOfOnes(no,x));
	
}

int recursiveCountNumberOfZero(int no, int x)
{
	if(x==0)
	 return 0;
	 
	if((no&x)==0)
	{
	 
	 return 1 + recursiveCountNumberOfZero(no,x<<1);

	}
	return recursiveCountNumberOfZero(no,x<<1);
}

int recursiveCountNumberOfOnes( int no,int x)
{
	if(x==0)
	 return 0;
	 
	if((no&x)!=0)
	{
	
	 return 1 + recursiveCountNumberOfOnes(no,x<<1);
	
	}
	return recursiveCountNumberOfOnes(no,x<<1);
		   	
}


