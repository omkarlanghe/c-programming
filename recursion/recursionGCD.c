//Write a recursive funtion which return GCD of two numbers

#include<stdio.h>

int main(){
 int n1,n2;
 
 printf("Enter the first number:\n");
 scanf("%d",&n1);
 printf("Enter the second number:\n");
 scanf("%d",&n2);
 
 printf("GCD of two number is: %d\n",gcd(n1,n2));
 return 0;
}

void gcd(int n1, int n2){

	if(n1==n2)
	 return n1;
	 
	if(n1>n2)
	{
		n1 = n1-n2;
	}
	else
	{
		n2 = n2-n1;
	}
	
	return gcd(n1,n2);
}
