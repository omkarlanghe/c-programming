#include<stdio.h>
int amstrong(int num);
int main()
{
	int num;
	int temp;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	temp = num;

	int retVal = amstrong(num);
	
	if(temp == retVal)
	{
		printf("%d is armstrong number\n",num);
	}
	else
	{
		printf("%d is not armstrong number\n",num);
	}
	return 0;
}
int amstrong(int num)
{
	int rem,result=0;	
	while(num!=0)
	{
		rem = num%10;
		result = result+(rem*rem*rem);
		num = num/10;
	}
	return result;
}
