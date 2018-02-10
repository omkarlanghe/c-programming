#include<stdio.h>

int main(){
 int num,rem,result=0;
 int temp;
 printf("Enter the number to be reversed:");
 scanf("%d",&num);
 
 printf("reverse is %d\n",reverse(num));
 return 0;
 }
 
 
 int reverse(int num){
 	
 	//int temp = num;
 	int rem,result=0;
 	
 	do{
 	rem = num%10;
 	result = result*10+rem;
 	num=num/10;

 	
  	}while(num>0); 
return result;
}

