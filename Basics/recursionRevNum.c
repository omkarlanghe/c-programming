/*
	Write a recursive funtion to reverse the given number
*/

#include<stdio.h>
int main(){

 int n;
 printf("Enter the number to reverse:\n");
 scanf("%d",&n);
 
 printf("Reverse is:%d\n",reverseNumRecursion(n));
}

int reverseNumRecursion(int n){
 int rem;
 int result=0;
 	
 	if(n==0)	
 	 return 0;
 	
 	while(n>0)
 	{ 
 		rem = n%10;
 		result = result * 10 + rem;
		n=n/10;
	
	 	reverseNumRecursion(n/10);
	}
	
	return result;
 	
 	
 
 	
}
