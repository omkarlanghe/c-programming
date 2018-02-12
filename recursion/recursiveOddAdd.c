/*
	Write a recursive funtion which returns sum of odd digit of the given number.

*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Addition of Odd numbers is:%d\n",recursionAddOddNumbers(n));
	
	
}

int recursionAddOddNumbers(int n)
{
	int rem;
	int sum=0;
	
	if(n==0)
	 return 0;
	 
	rem = n%10;
	
	if((rem&1)!=0){
	
	sum = sum+rem;
	
	}
	return sum+recursionAddOddNumbers(n/10);

}
