#include<stdio.h>

int main(){
 int num=0;
 
 printf("Enter the value of number:");
 scanf("%d",&num);
 int result = even_sum(num);
 printf("Sum of %d digits is: %d",num,result);
 return 0;

}

int even_sum(int num){
 int rem;
 int sum=0;
 while(num!=0){
 	rem = num % 10; //reads each digit from the given number
 	
 	//printf("%d",rem); prints each digit from the number
 	
 	//num = num/10;
 	if((rem & 1) == 0 ) //even  |  (rem &1 != 0)=odd 
 		
 		sum += rem;
 		num = num/10;
 	}
 	return sum;


}
