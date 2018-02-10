#include<stdio.h>

int main(){
 int num,rem,result=0;
 int temp;
 printf("Enter the number to be reversed:");
 scanf("%d",&num);
 printf("",pallidrome(num));
 }
 
 int pallidrome(int num)
 {
 int temp = num;
 int rem,result;
 do{
 	rem = num%10;
 	result = result*10+rem;
 	num=num/10;

 	
  }while(num>0); 

 //printf("reverse is %d\n",result);
 
 
 if(temp==result){
 
 	printf("The number is pallidrome:\n");
 }else{
 	printf("The number is not pallidrome:\n");
 }
 return 0;
}

