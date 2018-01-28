#include<stdio.h>

int main(){

 int x,num,fact; 
 printf("Enter the number:");
 scanf("%d",&num);
 
 fact = 1;
 for(x=2;x<=num;x++){
 	fact = fact * x;
 	printf("factorial of %d is: %d\n",num,fact);
 
 }
 return 0;

}
