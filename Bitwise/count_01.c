/*
	write a program to count number of zero and one's bit in a given number
*/
#include<stdio.h>
int main(){
	int no1,no2;
	
	printf("Enter the number:\n");
	scanf("%d",&no1);
	printf("Enter the number:\n");
	scanf("%d",&no2);
	printf("Count of Zero bits is:%d\n",countZeroBits(no1));
	printf("Count of One bits is:%d\n",countOneBits(no2));

}

int countZeroBits(int no){
	int x=1;
	int count=0;
	while(x!=0)
	{
		if((no&x)==0)
		count++;
		
		x=x<<1;
	}
	return count;

}

int countOneBits(int no){
	int x=1;
	int count=0;
	while(x!=0)
	{
		if((no&x)!=0)
		count++;
		
		x=x<<1;
	}
	return count;

}


