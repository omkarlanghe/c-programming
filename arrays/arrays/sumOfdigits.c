#include<stdio.h>
int main()
{
	int sumOfDigitArray(int*);
	int a[5],i;
	
	printf("Enter the elements in an array:\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Sum of all digits present in an array is: %d\n",sumOfDigitArray(a));

	return 0;
}

int sumOfDigitArray(int a[])
{
	int i,rem=0,sum;
	
	for(i=0;i<5;i++)
	{
		rem = a[i]%10;
		sum = sum + rem;
		a[i]/10;
	}	
	return sum;

}

