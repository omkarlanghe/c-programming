#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header.h"

void HomeScreen()
{
	int choice = 0;

	printf("WELCOME TO C-PROGRAMMING\n\n");
	printf("Enter your choice:\n\n");
	printf("1. 	Basic Programs\n"
			"2. 	Bitwise Operators\n"
			"3. 	Arrays\n"
			"4. 	Pointers\n"
			"5. 	Recursion\n"
			"6. 	Strings\n"
			"7. 	Pattern Programs\n"
			"8. 	Exit\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("This section contain's all the basic program's required to understand the fundamentals of c-programming\n\n");
			CProgrammingFundamentals();
			break;
		case 2:
			printf("This section contain's all the basic program's required to understand Bitwise operators\n\n");
			BitwiseOperators();
			break;
		case 3:
			printf("This section contain's all the basic program's required to understand Arrays\n\n");
			Arrays();
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
void Arrays()
{
	int choice = 0, size, retVal, index, startIndex, endIndex, step;
	int *array = NULL;
	float ret;
	printf("WELCOME TO ARRAYS IN C\n\n");
	printf("Enter your choice:\n\n");
	printf("1. 	Difference of alternative Sum of elements\n"
			"2. 	Remove index element\n"
			"3. 	Sum of digits of array elements\n"
			"4. 	Array index jumping\n"
			"5. 	Min and Max from an array\n"
			"6. 	Reversing Array\n"
			"7. 	Average\n"
			"8. 	Average of even and odd\n"
			"9. 	Integer palindrom\n"
			"10. 	Largest Subsequence\n"
			"11.	Second max and min\n"
			"12.	String palindrom\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Program to print difference of alternative sum of elements\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d", &size);

			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);
			
			retVal = DifferenceAltElements(array, size);

			printf("Difference of alternative sum is: %d\n", retVal);
			free(array);
			HomeScreen();
			break;
		case 2:
			printf("Program to remove index element:\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d", &size);

			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);
			printf("original elements in an array are\n");
			for(int i = 0 ; i < size ; i++)
				printf("%d ", array[i]);
			printf("\n");
			printf("Enter the index to remove:\n");
			scanf("%d", &index);
			printf("\n");
			RemoveIndexElement(array,size,index);
			printf("\n");
			free(array);
			HomeScreen();
			break;
		case 3:
			printf("Program returning Sum of digits from given array:\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d", &size);

			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);
			printf("original elements in an array are\n");
			for(int i = 0 ; i < size ; i++)
				printf("%d ", array[i]);
			printf("\n");
			SumOfDigitsFromArray(array, size);
			printf("\n");
			free(array);
			HomeScreen();
			break;
		case 4:
			printf("Program to print array from start index, end index and step size by user\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d",&size);

			array = (int *)malloc(size*sizeof(int));
			
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d", &array[i]);

			printf("Enter the index from where you want to print an array:\n");
			scanf("%d",&startIndex);
			printf("Enter the index till you want to print an array:\n");
			scanf("%d",&endIndex);
			printf("Enter the step size of an array:\n");
			scanf("%d",&step);
			ArrayIndexJumping(array, startIndex, endIndex, step);
			printf("\n");
			free(array);
			HomeScreen();
			break;
		case 5:
			printf("Program to print maximum and minimum from an array\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d",&size);

			array = (int *)malloc(size*sizeof(int));

			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d", &array[i]);

			retVal = ArrayMin(array,size);
			printf("minimum number from given array is -> %d ",retVal);
			printf("\n");

			retVal = ArrayMax(array,size);
			printf("maximum number from given array is -> %d ",retVal);
			printf("\n");

			free(array);
			HomeScreen();
			break;
		case 6:
			printf("Program to print reverse of an array\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d",&size);
			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);

			printf("Reverse of an array is:\n");
			for(int i = size-1 ; i >= 0 ; i--)
				printf("%d ",array[i]);
			free(array);
			printf("\n");
			HomeScreen();
			break;
		case 7:
			printf("Program to find Average from given elements in an array\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d",&size);

			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);

			ret = AvgOfArrElements(array, size);
			printf("Average of given elements from array is -> %f ",ret);
			free(array);
			printf("\n");
			HomeScreen();
			break;
		case 8:
			printf("Program to print average of even and odd numbers from array\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d",&size);

			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);

			retVal = AvgOfEvenNum(array,size);
			printf("average of even numbers from array is -> %d ",retVal);
			printf("\n");
			retVal = AvgOfOddNum(array, size);
			printf("average of odd numbers from array is -> %d ",retVal);
			printf("\n");
			free(array);
			HomeScreen();
			break;
		case 9:
			printf("Program to check if palindrom or not\n\n");
			printf("Enter the size of an array:\n");
			scanf("%d",&size);

			array = (int *)malloc(size*sizeof(int));
			printf("Enter the elements in an array:\n");
			for(int i = 0 ; i < size ; i++)
				scanf("%d",&array[i]);

			retVal = IntegerPalindrome(array,size);
			if(retVal == 0)
				printf("Elements in an array are palindrom\n");
			else
				printf("Elements in an array are not palindrom\n");
			printf("\n");
			free(array);
			HomeScreen();
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
}
void BitwiseOperators()
{
	int choice = 0, retVal = 0;
	int num1 = 0, num2 = 0, evenSum = 0, oddSum = 0, noOfBits = 0, pos = 0, pos2 = 0;
	printf("WELCOME TO BITWISE OPERATORS\n\n");
	printf("Enter your choice:\n\n");
	printf("1. 	Addition Of Even and Odd Digits\n"
			"2. 	Multiple of 8,16,32\n"
			"3. 	Count O and 1 bits from a given number\n"
			"4. 	Is Odd or Even via bitwise\n"
			"5. 	Turn On bits\n"
			"6. 	Turn Off bits\n"
			"7. 	Toggle bits\n"
			"8. 	Swap bits\n"
			"9. 	Turn Off right most one bit\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Addition of Even and Odd Digit's from a given number\n\n");
			printf("Enter the number:\n");
			scanf("%d",&num1);

			evenSum = AdditionOfEven(num1);
		       	printf("Addition of even digit's in a given numbers is: %d\n",evenSum);
			oddSum = AdditionOfOdd(num1);
			printf("Addition of odd digit's in a given numbers is: %d\n", oddSum);
			HomeScreen();
			break;
		case 2:
			printf("Is Multiple of 8,16 and 32\n\n");
			printf("Enter the number to check:\n");
			scanf("%d", &num1);
			//Multiple of eight
			if(IsMultipleOfEight(num1) == true)
			{
				printf("The number %d is multiple of eight\n",num1);
			}
			else
			{
				printf("The number %d is not multiple of eight\n",num1);
			}
			//Multiple of sixteen
			if(IsMultipleOfSixteen(num1) == true)
			{
				printf("The number %d is multiple of sixteen\n",num1);
			}
			else
			{
				printf("The number %d is not multiple of sixteen\n",num1);
			}
			//Multiple of thirty two
			if(IsMultipleOfThirtyTwo(num1) == true)
			{
				printf("The number %d is not multiple of thirty two\n", num1);
			}
			else
			{
				printf("The number %d is not multiple of thirty two\n", num1);
			}
			HomeScreen();
			break;
		case 3:
			printf("Program to count 0 and 1 bits in a given number\n\n");
			printf("Enter the number:\n");
			scanf("%d",&num1);

			retVal = CountOfZeroBits(num1);
			printf("Count of zero bits in a given number is: %d\n", retVal);
			retVal = CountOfOneBits(num1);
			printf("Count of one bits in a given number is: %d\n", retVal);
			HomeScreen();
			break;
		case 4:
			printf("Program to check whether the given number is odd or even via Bitwise-&\n\n");
			printf("Enter the number to check:\n");
			scanf("%d",&num1);

			if(IsOddEvenNumber(num1) == true)
				printf("The number %d is odd number\n", num1);
			else
				printf("The number %d is even number\n", num1);
			HomeScreen();
			break;
		case 5:
			printf("Program to Turn On bits from given number.\n\n");
			printf("Enter the number to check:\n");
			scanf("%d",&num1);
			printf("Enter the number of bits to Turn On:\n");
			scanf("%d",&noOfBits);
			printf("Enter Bit position:\n");
			scanf("%d",&pos);
			printf("Result Before turn on bits - %d\n", num1);
			printf("Result After turn on bits - %d\n", TurnOnBits(num1,noOfBits,pos));
			HomeScreen();
			break;
		case 6:
			printf("Program to Turn Off bits from given number.\n\n");
			printf("Enter the number to check:\n");
			scanf("%d",&num1);
			printf("Enter the number of bits to Turn off:\n");
			scanf("%d",&noOfBits);
			printf("Enter Bit position:\n");
			scanf("%d",&pos);
			printf("Result before turn off bits - %d\n", num1);
			printf("Result After turn off bits - %d\n", TurnOffBits(num1,noOfBits,pos));
			HomeScreen();
			break;
		case 7:
			printf("Program to Toggle bits from given number.\n\n");
			printf("Enter the number to check:\n");
			scanf("%d",&num1);
			printf("Enter the number of bits to toggle:\n");
			scanf("%d",&noOfBits);
			printf("Enter Bit position:\n");
			scanf("%d",&pos);
			printf("Result before toggling bits - %d\n", num1);
			printf("Result After toggling bits - %d\n", ToggleBits(num1,noOfBits,pos));
			HomeScreen();
			break;
		case 8:
			printf("Program to Swap bits between two numbers.\n\n");
			printf("Enter the first number:\n");
			scanf("%d",&num1);
			printf("Enter Position:\n");
			scanf("%d",&pos);
			printf("Enter the second number:\n");
			scanf("%d",&num2);
			printf("Enter Position:\n");
			scanf("%d",&pos2);
			printf("Enter the number of bits to swap:\n");
			scanf("%d",&noOfBits);

			printf("Bits before swapping:\nA.%d\nB.%d\n",num1, num2);
			SwapBitsAtDiffPosition(num1, num2, pos, pos2, noOfBits);
			HomeScreen();
			break;
		case 9:
			printf("Program to Turn off right most one bit:\n\n");
			printf("Enter the number:\n");
			scanf("%d",&num1);
			printf("Right most one bit off - %d\n", RightMostOneBitPosition(num1));
			HomeScreen();
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
	printf("1. 	Hello Universe Program\n"
			"2. 	Arithmetic Operations\n"
			"3. 	Armstrong Number\n"
			"4. 	Fibonacci series\n"
			"5. 	Max-Min Numbers\n"
			"6. 	Leap Year\n"
			"7. 	Palindrome - Number\n"
			"8. 	IsPrime Number\n"
			"9. 	Prime Number Range\n"
			"10. 	Size of data-types in C\n");
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
int IntegerPalindrome(int *array, int size)
{
	int flag = 0;
	for(int i = 0, j = size-1 ; i<size/2 ; i++ , j--)
		if(array[i] != array[j])
			flag = 1;
		else
			flag = 0;
	return(flag);
}

int AvgOfEvenNum(int *array, int size)
{
	int sum = 0, oddCount = 0, evenCount = 0;
	int retVal = 0;
	for(int i = 0 ; i < size ; i++)
	{
		if((array[i]&1) == 0)
		{
			sum += array[i];
			//printf("sum -> %d\n",sum);
			if(array[i]&1)
			{
				oddCount++;
			}
			else
			{
				evenCount++;
				//printf("ec -> %d\n", evenCount);
			}
		}
	}
	retVal = sum/evenCount;
	return(retVal);
}

int AvgOfOddNum(int *array, int size)
{
	int sum = 0, oddCount = 0, evenCount = 0;
	int retVal = 0;
	for(int i = 0 ; i < size ; i++)
	{
		if((array[i]&1) != 0)
		{
			sum += array[i];
			//printf("sum -> %d\n",sum);
			if(array[i]&1)
			{
				oddCount++;
				//printf("oc -> %d\n",oddCount);
			}
			else
			{
				evenCount++;
			}
		}
	}
	retVal = sum/oddCount;
	return(retVal);
}

float AvgOfArrElements(int *array, int size)
{
	int sum = 0;
       	float result;	
	for(int i = 0; i < size ; i++)
		sum += array[i];
	result = sum/size;
	return(result);
}

int ArrayMin(int *array, int size)
{
	int min;
	min = array[0];
	for(int i = 1 ; i < size ; i++)
		if(min > array[i])
			min = array[i];
	return min;
}

int ArrayMax(int *array, int size)
{
	int max;
	max = array[0];
	for(int i = 1 ; i < size ; i++)
		if(max < array[i])
			max = array[i];
	return max;
}

int ArrayIndexJumping(int *array, int startIndex, int endIndex, int stepSize)
{
	for(int i = startIndex ; i < endIndex ; i = i + stepSize)
		printf("arr[%d]\n", array[i]);
}

int SumOfDigitsFromArray(int *array, int size)
{
	int temp;
	int rem, sum, arraySum;
	for(int i = 0 ; i < size ; i++)
	{
		temp = 0;
		rem = 0, sum = 0,arraySum = 0;
		temp = array[i];		
		
		while(temp!=0)
		{
			rem = temp%10;
			sum = sum + rem;
			temp = temp/10;
		}
		printf("sum of digits from %dth index -> %d\n", i,  sum);
	}
	printf("\n");
}

int RemoveIndexElement(int *array, int size, int index)
{
	if(index <= size)
	{
		for(int i = index-1 ; i < size-1 ; i++)
			array[i] = array[i+1];
		printf("New Array is:\n");
		for(int i = 0 ; i < size-1 ; i++)
			printf("%d ",array[i]);
	}
	else
	{
		printf("unable to remove, index not found..\n");
	}
}

int DifferenceAltElements(int array[], int size)
{
	int firstsum = 0, secsum = 0, difference = 0;
	for(int i = 0 ; i < size ; i = i+2)
		firstsum = firstsum + array[i];
		for(int j = 1 ; j < size ; j = j+2)
			secsum = secsum + array[j];
	
	if(firstsum > secsum)
		difference = firstsum - secsum;
	else
		difference = secsum - firstsum;
	return(difference);
}

int RightMostOneBitPosition(int num1)
{
	return (num1&(num1-1));
}

int SwapBitsAtDiffPosition(int num1, int num2, int pos, int pos2, int noOfBits)
{
	int x = (1<<noOfBits)-1;

	int temp1 = num1&(x<<(pos-noOfBits));
	num1 = num1&(~(x<<(pos-noOfBits)));

	int temp2 = num2&(x<<(pos2-noOfBits));
	num2 = num2&(~(x<<(pos2-noOfBits)));

	if(pos>pos2)
	{
		temp1 = temp1>>(pos-pos2);
		temp2 = temp2<<(pos-pos2);
	}
	else
	{
		temp1 = temp1<<(pos-pos2);
		temp2 = temp2>>(pos-pos2);
	}

	num1 = num1|temp2;
	num2 = num2|temp1;

	printf("Bits After Swapping:\nA.%d\nB.%d\n",num1,num2);
}

int TurnOnBits(int num1, int noOfBits, int pos)
{
	int x = 1;
	x = (x<<noOfBits)-1;
	x = x<<(pos-noOfBits);
	
	return num1|x;
}

int TurnOffBits(int num1, int noOfBits, int pos)
{
	int x = 1;
	x = (x<<noOfBits)-1;
	x = x<<(pos-noOfBits);
	x = ~x;

	return num1&x;
}

int ToggleBits(int num1, int noOfBits, int pos)
{
	int x = 1;
	x = (x<<noOfBits)-1;
	x = x<<(pos-noOfBits);

	return num1^x;
}

bool IsOddEvenNumber(int num1)
{
	if((num1&1) != 0)
		return true;
	else
		return false;
}

int CountOfZeroBits(int num1)
{
	int x = 1;
	int count = 0;
	while(x != 0)
	{
		if((num1&x)==0)
			count++;
		x = x<<1;
	}
	return count;
}

int CountOfOneBits(int num1)
{
	int x = 1;
	int count = 0;
	while(x != 0)
	{
		if((num1&x)!=0)
			count++;
		x = x<<1;
	}
	return count;
}

bool IsMultipleOfEight(int num1)
{
	if((num1&7) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool IsMultipleOfSixteen(int num1)
{
	if((num1&15) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

bool IsMultipleOfThirtyTwo(int num1)
{
	if((num1&31) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int AdditionOfEven(int num1)
{
	int rem, sum = 0;
	while(num1 != 0)
	{
		rem = num1%10;
		if((rem&1) == 0)
		{
			sum = sum + rem;
		}
		num1 = num1/10;
	}
	return(sum);
}

int AdditionOfOdd(int num1)
{
	int rem, sum = 0;
	while(num1 != 0)
	{
		rem = num1%10;
		if((rem&1)!=0)
		{
			sum = sum + rem;
		}
		num1 = num1/10;
	}
	return(sum);
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

