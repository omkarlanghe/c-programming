#include<stdio.h>
int binarytoDecimal(int binary_no);
int binarytoDecimal(int binary_no)
{
	int result = 0;
	int bit_position = 0;
	
	while(binary_no)
	{
		int rem = binary_no % 10;
		
		if(rem == 1)
		{
			result += (1<<bit_position);
		}
		bit_position++;
		binary_no = binary_no/10;
	}
	return result;
}

int main()
{
	int binary_no;
	
	printf("Enter the binary number to convert it into Decimal:\n");
	scanf("%d",&binary_no);
	
	int retVal = binarytoDecimal(binary_no);
	
	printf("Converted Decimal number is:%d \n",retVal);
	
	return 0;
}
