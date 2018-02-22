#include<stdio.h>

int main(){

 int num;
 printf("Enter the number you want to enter:");
 scanf("%d",&num);
 int result = odd_sum(num);
 printf("sum of %d digit is :%d",num,result); 
 return 0;
}

int odd_sum(int num){
 int rem;
 int sum=0;
 
 while(num!=0){
  rem = num % 10;
  
  if((rem & 1)!=0)
  sum =+ sum + rem;
  num = num/10;
 
 }
 return sum;

}
