/*
	Program to accept the string from user and accept character who's occurance is to be counted in given string using pointers.
	
*/
#include<stdio.h>

int main()
{
	char name[30];
	char ch;
	char *ptr;
	int count;

	printf("Enter the string you want:");
	scanf("%s",name);


	printf("Enter the character to check its occurance:");
	scanf(" %c",&ch);	
	
	ptr = name;
	
	while(*ptr!='\0')
	{
	
		
		if(*ptr == ch)
		{
			count = count + 1;
			
		}
		*ptr++;
	
	}
	
	printf("Occurance is:%d\n",count);
	
}
