/*
	write a program to accept a string and character from user and print character occurances in the string.
*/
#include<stdio.h>

int main()
{
	char string[20],ch;
	int count=0,i;
	
	printf("Enter the string:\n");
	scanf("%s",string);
	
	printf("Enter the character to check its occurance:\n");
	scanf(" %c",&ch);
	
	while(string[i] != '\0')
	{
		if(string[i] == ch )
		{
			count++;
		}
		string[i++];
	}
	printf("character containing %d times\n",count);
	
	return 0;
}
