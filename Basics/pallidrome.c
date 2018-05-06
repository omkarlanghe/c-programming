#include<stdio.h>
int pallidrome(int num);
int main()
{
	int num,rem,result=0;
	int temp;
	printf("Enter the number to be reversed:");
	scanf("%d",&num);
	temp = num;
	
	int RetVal = pallidrome(num);
	
	if(RetVal == temp)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Number is not palindrome\n");
	}
	return 0; 
 }
 
int pallidrome(int num)
{
	 int temp = num;
	 int rem,result;
	 do{
	 	rem = num%10;
	 	result = result*10+rem;
	 	num=num/10;

	 	
	 }while(num>0); 
	 
	 return result;
}

