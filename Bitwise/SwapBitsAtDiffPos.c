#include<stdio.h>

int main()
{
	int SwapBitsAtDiffPosition(int,int,int,int,int);
	
	int num1,num2,pos1,pos2,nOfBits;
	
	printf("Enter the first value:\n");
	scanf("%d",&num1);

	printf("Enter Position:\n");
	scanf("%d",&pos1);
	
	printf("Enter the second value:\n");
	scanf("%d",&num2);
	
	printf("Enter Position:\n");
	scanf("%d",&pos2);
	
	printf("Enter the number of Bits:\n");
	scanf("%d",&nOfBits);	
	
	printf("Bits Before Swapping:\nA.%d\nB.%d\n",num1,num2);
	
	SwapBitsAtDiffPosition(num1,num2,pos1,pos2,nOfBits);
}

int SwapBitsAtDiffPosition(int num1, int num2, int pos1, int pos2, int nOfBits)
{
	int x = (1<<nOfBits)-1;
	
	int temp1 = num1&(x<<(pos1-nOfBits));
	num1 = num1&(~(x<<(pos1-nOfBits)));
	
	int temp2 = num2&(x<<(pos2-nOfBits));
	num2 = num2&(~(x<<(pos2-nOfBits)));
	
	if(pos1>pos2)
	{
	
		temp1 = temp1>>(pos1-pos2);
		temp2 = temp2<<(pos1-pos2);
	
	}
	else
	{
		temp1 = temp1<<(pos1-pos2);
		temp2 = temp2>>(pos1-pos2);
	
	}
	
	num1 = num1 | temp2;
	num2 = num2 | temp1;
	
	printf("Bits After Swapping:\nA.%d\nB.%d\n",num1,num2);	

}
