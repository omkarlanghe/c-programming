#include<stdio.h>

int main(){
 int num,check,rem,sum;
 
 printf("Enter the number from user:\n");
 scanf("%d",&num);


 while(num!=0){
  rem = num%10;
  num = num/10;  	
   
 }
 printf("\nEnter the number to check\n");
 scanf("%d",&check);
 
 if((rem & check)==check)
 {
 rem++;	
 }
 
 printf("repeted: %d times",rem);

 return 0;
}
