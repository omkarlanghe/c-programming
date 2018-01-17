#include<stdio.h>

int add(int a, int b){
 int c;
 c = a + b;
 return(c);
}


int main()
{
 int num1,num2,result;
 printf("Enter the two numbers:");
 scanf("%d%d",&num1,&num2);
 result = add(num1,num2);
 
 printf("Addition of two numbrs is:%d\n",result);
 return 0;	
}
