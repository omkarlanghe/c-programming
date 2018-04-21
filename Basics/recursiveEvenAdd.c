/*
	Write a recursive funtion which returns sum of even digit of the given number.

*/

#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Addition of even number is:%d\n",recursionAddEvenNumbers(n));

}

int recursionAddEvenNumbers(int n){
	int rem;
	int sum=0;	 
	
	if(n==0){
	
	return 0;
		
	}
	
	rem = n%10;
	
	if((rem&1)==0)
	{
			sum = sum+rem;		
	}
	return sum+recursionAddEvenNumbers(n/10);
}
