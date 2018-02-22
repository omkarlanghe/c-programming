/*
	Write a program to accept a number from user, Accept bit position and number of bits to be turned on and off from the specified position from the given number.
	
*/

#include<stdio.h>
int main()
{
	int no, noOfBits, pos;
	
	printf("Enter the value:\n");
	scanf("%d",&no);
	printf("Enter the no_of_bits:\n");
	scanf("%d",&noOfBits);
	printf("Enter the Bit Position:\n");
	scanf("%d",&pos);
	
	printf("Result after Turn Off Bits: %d\n",TurnOffBits(no,noOfBits,pos));
	printf("Result after Turn On Bits: %d\n",TurnOnBits(no,noOfBits,pos));
	
}

int TurnOffBits(int no, int noOfBits, int pos)
{
	int x = 1;
	x = (x<<noOfBits)-1;
	x = x<<(pos-noOfBits);
	x = ~x;
	
	return no&x;	
}

int TurnOnBits(int no, int noOfBits, int pos)
{
	int x = 1;
	x = (x<<noOfBits)-1;
	x = x<<(pos-noOfBits);
	
	return no|x;
}
