/*
	WAP to accept two number from user, Accept from user, Accept position and number of bits to be swapped from number 1 to number 2 and number 2 to number 1. 
*/

#include<stdio.h>

int main()
{
	int bitSwapping(int,int,int,int);
	
	int num1,num2,bits,pos;
	
	printf("Enter the 1st Value:\n");
	scanf("%d",&num1);
	
	printf("Enter the 2nd Value:\n");
	scanf("%d",&num2);
	
	printf("Enter the Bit value:\n");
	scanf("%d",&bits);
	
	printf("Enter the Bit position:\n");
	scanf("%d",&pos);
	
	printf("Bits Before Swapping:\nA. %d\nB. %d\n",num1,num2);

	bitSwapping(num1,num2,bits,pos);
}

int bitSwapping(int num1,int num2, int bits, int pos)
{
	int x1,x2;
		
		x1 = 1;
		x1 = (x1<<bits)-1;
		x1 = x1<<(pos-bits);
		int temp1 = num1&x1;	
	
	
		x2 = 1;
		x2 = (x2<<bits)-1;
		x2 = x2<<(pos-bits);
		int temp2 = num2&x2;
		
		num1 = num1 & ~x1;
		num2 = num2 & ~x2;
		
		num1 = num1 | temp2;
		num2 = num2 | temp1;
		
		printf("Bits After Swapping:\nA. %d\nB. %d\n",num1,num2);
		
}
