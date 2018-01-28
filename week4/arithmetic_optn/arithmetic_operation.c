#include<stdio.h>
#include<stdlib.h>

int main(){

 int choice,num1,num2;
 while(1){
 printf("\t1.ADD:\n \t2.SUB:\n \t3.MUL:\n \t4.EXIT:\n");
 printf("Enter your choice:\n");
 scanf("%d",&choice);
 
 switch(choice)
 {
 	case 1:
 	printf("Welcome to addition operation:\n");
 	printf("Enter 2 numbers to add:\n");
 	scanf("%d%d",&num1,&num2);
 	printf("\nResult of additon:%d\n",add(num1,num2));
 	break;

 	case 2:
 	printf("Welcome to subtraction operation:\n");
 	printf("Enter 2 numbers to subtract:\n");
 	scanf("%d%d",&num1,&num2);
 	printf("\nResult of additon:%d\n",sub(num1,num2));
 	break; 
 	
 	case 3:
 	printf("Welcome to multiplication operation:\n");
 	printf("Enter 2 numbers to multiply:\n");
 	scanf("%d%d",&num1,&num2);
 	printf("\nResult of additon:%d\n",mul(num1,num2));
 	break;
 	
 	case 4:
 	exit(0);
 	break;
 }
 }
 
return 0;
}
