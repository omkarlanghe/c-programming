//Write a recursive program to return factorial of the given numbers

#include<stdio.h>

int main(){
 int n;
 
 printf("Enter the number:\n");
 scanf("%d",&n);
 
 printf("Factorial is : %d\n",factorial(n));

}

int factorial(int n){
	if(n==0 || n==1)
	return 1;
	
	return n * factorial(n-1);

}
