#include<stdio.h>

int main()
{
	int num1, num2;
	printf("Enter num1:\n");
	scanf("%d",&num1);
	printf("Enter num2:\n");
	scanf("%d",&num2);

	int result = num1 - num2;

	if(result < 0)
		result = result*(-1);

	printf("absolute difference is: %d\n", result);
	return 0;
}
