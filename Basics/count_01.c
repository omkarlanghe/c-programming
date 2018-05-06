/*
	write a program to count number of zero and one's bit in a given number
*/
#include<stdio.h>
int countZeroBits(int no);
int countOneBits(int no);
int main(){
	int no;
	
	printf("Enter the number:\n");
	scanf("%d",&no);
	printf("Count of Zero bits is:%d\n",countZeroBits(no));
	printf("Count of One bits is:%d\n",countOneBits(no));
	
	return 0;
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


