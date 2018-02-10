#include<stdio.h>

int main(){
 int num1,num2,check,rem1,rem2;
 
 printf("Enter the number from user:\n");
 scanf("%d",&num1);
 
 printf("Enter the number from user:\n");
 scanf("%d",&num2);
 
 printf("",digits(num1,num2));

return 0;
}


int digits(int num1,int num2)
{
 while((num1&&num2)!=0){
  //rem1 = num1%10;
  num1 = num1/10;
  
  //rem2 = num2%10;
  num2 = num2/10;  	
   
 }
 int count1 = num1++;
 int count2 = num2++;
 
 if(count1==count2)
 {
 	printf("Same digits:");
 }else{
 	printf("Not same digits:");
 }
 
}

