#include<stdio.h>
#include<stdlib.h>

int countZeroBits(int no);
int countOneBits(int no);
int TurnOnBits(int no,int nOfBits,int pos);
int TurnOffBits(int no,int nOfBits,int pos);
int ToggleBits(int no,int nOfBits,int pos);
int SwapBits(int no, int no2, int pos, int pos2, int nOfBits);
int TurnOffRightMostOneBit(int no);

int countZeroBits(int no)
{
	int x = 1;
	int count = 0;
	while(x!=0)
	{	
		if((no&x)==0)
		{
			count++;
		}
		x = x<<1;
	}
	return count;
}

int countOneBits(int no)
{
	int x = 1;
	int count = 0;
	while(x!=0)
	{
		if((no&x)!=0)
		{
			count++;
		}
		x = x<<1;
	}
	return count;
}

int TurnOnBits(int no,int nOfBits,int pos)
{
	int x = 1;
	x = (x<<nOfBits)-1;
	x = x<<(pos-nOfBits);
	
	return no|x; //Turn on using '|' OR operator 
}

int TurnOffBits(int no,int nOfBits,int pos)
{
	int x = 1;
	x = (x<<nOfBits)-1;
	x = x<<(pos-nOfBits);
	
	x = ~x;
	
	return no&x; //Turn off using & Operator
}

int ToggleBits(int no,int nOfBits,int pos)
{
	int x = 1;
	x = (x<<nOfBits)-1;
	x = x<<(pos-nOfBits);
	
	return no^x; //Toggle using ^ Operator
}

int SwapBits(int no, int no2, int pos, int pos2, int nOfBits)
{
	int x = (1<<nOfBits)-1;
	
	int no1_part = no&(x<<(pos-nOfBits));
	no = no&(~(x<<(pos-nOfBits)));
	
	int no2_part = no2&(x<<(pos2-nOfBits));
	no2 = no2&(~(x<<(pos2-nOfBits)));	
	
	if(pos>pos2)
	{
		no1_part = no1_part>>(pos-pos2);
		no2_part = no2_part<<(pos-pos2);
	}
	else
	{
		no1_part = no1_part<<(pos-pos2);
		no2_part = no2_part>>(pos-pos2);
	}
	
	no = no|no2_part;
	no2 = no2|no1_part;
	
		printf("Bits After Swapping is\nA =%d\nB =%d\n",no,no2);
}

int TurnOffRightMostOneBit(int no)
{
	return no&(no-1);
}

void BitwiseOperatorsDemo()
{
	int no,no2,ch,nOfBits,pos,pos2,result=0;
	
	printf("\nWELCOME TO BITWISE MENU DRIVEN");
	printf("\n1.CountNoOfZeros");
	printf("\n2.CountNoOfOnes");
	printf("\n3.TurnOnBits");
	printf("\n4.TurnOffBits");
	printf("\n5.ToggleBits");
	printf("\n6.SwapBits");
	printf("\n7.TurnOffRightMostOneBit");
	printf("\n8.Exit");
	printf("\n");
	printf("\nEnter the choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter the number:\n");
			scanf("%d",&no);
			
			result = countZeroBits(no);
			
			printf("Count of zero bits is %d\n",result);
			break;
		case 2:
			printf("Enter the number:\n");
			scanf("%d",&no);
			
			result = countOneBits(no);
			
			printf("Count of one bits is %d\n",result);
			break;
		case 3:
			printf("Enter the number:\n");
			scanf("%d",&no);
			
			printf("Enter the number Bits\n");
			scanf("%d",&nOfBits);
			
			printf("Enter the value of position:\n");
			scanf("%d",&pos);
			
			result = TurnOnBits(no,nOfBits,pos);
			
			printf("TurnOnBits :%d\n",result);
			break;
		case 4:
			printf("Enter the number:\n");
			scanf("%d",&no);
			
			printf("Enter the number Bits\n");
			scanf("%d",&nOfBits);
			
			printf("Enter the value of position:\n");
			scanf("%d",&pos);
			
			result = TurnOffBits(no,nOfBits,pos);
			
			printf("TurnOffBits :%d\n",result);
			break;			
		case 5:
			printf("Enter the number:\n");
			scanf("%d",&no);
			
			printf("Enter the number Bits\n");
			scanf("%d",&nOfBits);
			
			printf("Enter the value of position:\n");
			scanf("%d",&pos);
			
			result = ToggleBits(no,nOfBits,pos);
			
			printf("ToggleBits :%d\n",result);
			break;
		case 6:
			printf("Enter the 1st number:\n");
			scanf("%d",&no);
	
			printf("Enter the 1st position for replacing:\n");
			scanf("%d",&pos);	
	
			printf("Enter the 2nd number:\n");
			scanf("%d",&no2);
			
			printf("Enter the 2nd position for replacing:\n");
			scanf("%d",&pos2);
			
			printf("Enter the number of bits:\n");
			scanf("%d",&nOfBits);
			
			printf("Bits Before swapping is\nA =%d\nB = %d\n",no,no2);
			
			SwapBits(no,no2,pos,pos2,nOfBits);
			break;
		case 7:
			printf("Enter the number:\n");
			scanf("%d",&no);
			
			result = TurnOffRightMostOneBit(no);
			
			printf("Number after turn off rightmost 1 bit is %d\n",result);
			break;
		
		case 8:
			exit(0);
			break;
		
		default:
			printf("Sorry you entered wrong choice..");
	}
}

int main()
{
	BitwiseOperatorsDemo();
	return 0;
}
