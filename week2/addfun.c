#include<stdio.h>

int add(int a, int b){
 int c;
 c = a + b;
 return(c);
}

int sub(int a, int b){
 int c;
 c = a - b;
 return(c);
}

int mul(int a, int b){
 int c;
 c = a * b;
 return(c);
}

int div(int a, int b){
 int c;
 c = a / b;
 return(c);
}

int mod(int a, int b){
 int c;
 c = a % b;
 return(c);
}

int main()
{
 int num1,num2,result,result2,result3,result4,result5;
 
 printf("Enter the two numbers:");
 scanf("%d%d",&num1,&num2);
 result = add(num1,num2);
 result2 = sub(num1,num2);
 result3 = mul(num1,num2);
 result4 = div(num1,num2);
 result5 = mod(num1,num2);
 
 printf("Addition of two numbrs is:%d\n",result);
 printf("Subtraction of two numbers is:%d\n",result2);
 printf("Multiplication of two numbers is:%d\n",result3);
 printf("Division of two numbers is:%d\n",result4);
 printf("Modulus of two numbers is:%d\n",result5);
 return 0;	
}
