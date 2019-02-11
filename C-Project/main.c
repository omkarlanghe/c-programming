#include<stdio.h>
#include<stdlib.h>

void HomeScreen();
void CProgrammingFundamentals();
void ArithmeticOperations();
void ArmstrongNumber();
void FibonacciSeries();
int MaximumNumber(int num1, int num2, int num3);
int MinimumNumber(int num1, int num2, int num3);
int LeapYear(int year);
int Palindrome(int num1);
int IsPrimeNumber(int num1);
void PrimeNumberRange(int min, int max);
void SizeOfDataTypesInC();

void HomeScreen()
{
	int choice = 0;

	printf("WELCOME TO C-PROGRAMMING\n\n");
	printf("Enter your choice:\n\n");
	printf("1. Basic Programs\n"
			"2. Bitwise Operators\n"
			"3. Arrays\n"
			"4. Pointers\n"
			"5. Recursion\n"
			"6. Strings\n"
			"7. Pattern Programs\n"
			"8. Exit\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("This section contain's all the basic program's required to understand the fundamentals of c-programming\n\n");
			CProgrammingFundamentals();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			exit(0);
			break;

	}	
}

void CProgrammingFundamentals()
{
	int choice = 0;
	int limit = 0;
	int num1 = 0,num2 = 0,num3 = 0, max = 0, min = 0;
	int year = 0, result = 0, temp = 0;

	printf("WELCOME TO C FUNDAMENTALS\n\n");
	printf("Enter your choice:\n\n");
	printf("1. Hello Universe Program\n"
			"2. Arithmetic Operations\n"
			"3. Armstrong Number\n"
			"4. Fibonacci series\n"
			"5. Max-Min Numbers\n"
			"6. Leap Year\n"
			"7. Palindrome - Number\n"
			"8. IsPrime Number\n"
			"9. Prime Number Range\n"
			"10. Size of data-types in C\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("Hello Universe\n\n");
			//CProgrammingFundamentals();
			break;
		case 2:
			printf("Arithmetic Operations\n\n");
			ArithmeticOperations();
			//CProgrammingFundamentals();
			break;
		case 3:
			printf("Program to check the armstrong number\n\n");
			ArmstrongNumber();
			//CProgrammingFundamentals();
			break;
		case 4:
			printf("Enter the limit for fibonnaci series:\n");
			scanf("%d",&limit);
			FibonacciSeries(limit);
			CProgrammingFundamentals();
			break;
		case 5:
			printf("Enter first number:\n");
			scanf("%d",&num1);
			printf("Enter second number:\n");
			scanf("%d",&num2);
			printf("Enter thrid number:\n");
			scanf("%d",&num3);
			
			max = MaximumNumber(num1,num2,num3);
			printf("%d is the maximum number from all three\n",max);
			min = MinimumNumber(num1,num2,num3);
			printf("%d is the minimum number from all three\n",min);
			break;
		case 6:
			printf("Check Leap year\n");
			printf("Enter the year to check:\n");
			scanf("%d",&year);

			result = LeapYear(year);
			if(result == 1)
			{
				printf("%d is a leap year\n",year);
			}
			else
			{
				printf("%d is not a leap year\n",year);
			}
			break;
		case 7:
			printf("Check whether given number is palindrome or not\n");
			printf("Enter the number to check:\n");
			scanf("%d",&num1);

			temp = num1;

			result = Palindrome(num1);
			if(temp == result)
			{
				printf("%d is a palindrome\n", num1);
			}
			else
			{
				printf("%d is not a palindrome\n", num1);
			}
			break;
		case 8:
			printf("Check whether given number is prime or not\n");
			printf("Enter the number to check:\n");
			scanf("%d",&num1);

			if(IsPrimeNumber(num1))
			{
				printf("%d is a prime number\n", num1);
			}
			else
			{
				printf("%d is not a prime number\n", num1);
			}
			break;
		case 9:
			printf("Display prime numbers within given range\n");
			printf("Enter the minimum range:\n");
			scanf("%d",&min);
			printf("Enter the maximum range:\n");
			scanf("%d",&max);
			PrimeNumberRange(min,max);
			break;
		case 10:
			printf("Display Size of data-types in C\n");
			SizeOfDataTypesInC();
			break;
	}
}

void ArithmeticOperations()
{
	int num1 = 0, num2 = 0;
	printf("Enter Two numbers to perform arithmetic operations\n");
	printf("Enter 1st number:\n");
	scanf("%d",&num1);
	printf("Enter 2nd number:\n");
	scanf("%d",&num2);
	
	//Addition
	int addition = num1 + num2;
	printf("\nAddition is: %d", addition);
	
	//Subtraction
	if(num1 > num2)
	{
		int subtraction = num1 - num2;
		printf("\nSubtraction is: %d", subtraction);
	}
	else
	{
		int subtraction = num2 - num1;
		printf("\nSubtraction is: %d", subtraction);
	}
	
	//Multiplication
	int multiplication = num1 * num2;
	printf("\nMultiplication is: %d", multiplication);
	
	//Division
	int division = num1/num2;
	printf("\nDivision is: %d\n", division);
	
	HomeScreen();
}

void ArmstrongNumber()
{
	int num;
       	int temp = 0, rem = 0, result = 0;
	printf("Enter the number to check:\n");
	scanf("%d",&num);
	
	
	temp = num;
	
	while(num != 0)
	{
		rem = num%10;
		result = result+(rem*rem*rem);
		num = num/10;
	}
	
	if(temp == result)
	{
		printf("%d is a armstrong number\n", temp);
	}
	else
	{
		printf("%d is not a armstrong number\n", temp);
	}
	
	HomeScreen();	
}

void FibonacciSeries(int limit)
{
	int prev = 0,num = 1,next_num;
	printf("First %d fibonacci numbers are: ", limit);
	printf("%d\n",prev);
	printf("%d\n",num);
	for(int i = 0 ; i <= limit ; i++)
	{
		next_num = num + prev;
		printf("%d\n", next_num);
		prev = num;
		num = next_num;
	}
}

int MaximumNumber(int num1, int num2, int num3)
{
	if((num1 > num2) && (num1 > num3))
	{
		return num1;
	}
	else if(num2 > num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

int MinimumNumber(int num1, int num2, int num3)
{
	if((num1 < num2) && (num1 < num3))
	{
		return num1;
	}
	else if((num2 < num3))
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

int LeapYear(int year)
{
	int flag = 0;

	if((year%400) == 0)
	{
		return flag = 1;
	}
	else if((year%100) == 0)
	{
		return flag = 0;
	}
	else if((year%4) == 0)
	{
		return flag = 1;
	}
	else
	{
		return flag = 0;
	}
	return flag;
}

int Palindrome(int num1)
{
	int rem = 0,result = 0;

	while(num1 != 0)
	{
		rem = num1%10;
		result = result*10+rem;
		num1 = num1/10;
	}
	
	return result;
}

int IsPrimeNumber(int num)
{
	int flag = 1;
	
	if(num%2 == 0)
	{
		return flag = 0;
	}
	else if(num!=3)
	{
		for(int i = 3 ; i < (num/2+1) ; i = i+2)
		{
			if(num%i == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
}

void PrimeNumberRange(int min, int max)
{
	int n;
	for(n = min ; n < max ; n++)
	{
		int flag = 1;
		for(int i = 2 ; i < (n/2) ; i++)
		{
			if(n%i == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			printf("prime numbers are:%d\n", n);
		}
	}
}

void SizeOfDataTypesInC()
{
	printf("SizeOf(char) = %ld\n", sizeof(char));
	printf("SizeOf(int) = %ld\n", sizeof(int));
	printf("SizeOf(float) = %ld\n", sizeof(float));
	printf("SizeOf(double) = %ld\n", sizeof(double));
	printf("SizeOf(short int) = %ld\n", sizeof(short int));
	printf("SizeOf(long int) = %ld\n", sizeof(long int));
	printf("SizeOf(long long int) = %ld\n", sizeof(long long int));
	printf("SizeOf(long double) = %ld\n", sizeof(long double));
}

int main()
{
	HomeScreen();
	return(0);
}
