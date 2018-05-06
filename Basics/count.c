#include<stdio.h>

int main(){
 int num,check,rem,sum,count=0;
 
 printf("Enter the number from user:\n");
 scanf("%d",&num);


 printf("\nEnter the number to check\n");
 scanf("%d",&check);

 while(num!=0)
 {
 	rem = num%10;
	if(rem==check)
	{
		count++;		 		
	}
  	num = num/10;  	
   
 }
 printf("repeted: %d times\n",count);
 return 0;
}
