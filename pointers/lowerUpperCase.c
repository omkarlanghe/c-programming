/*
	write a program to accept string from user and display all in lowercase and uppercase.
*/

#include<stdio.h>
#include<string.h>

int LowerCaseToUpperCase(char *str);
int UpperCaseTolowercase(char *str);

int main()
{
	char str[20];

	printf("Enter the string:\n");
	scanf("%s",str);
	
	LowerCaseToUpperCase(str);
	UpperCaseTolowercase(str);
		
	return 0;
}

int LowerCaseToUpperCase(char *str)
{
	int i;
	printf("Input = %s\n",str);
	
	for(i=0;i<10;i++)
	{
		str[i] = str[i]-32;
		
	}
	printf("LowerCase to UpperCase = %s\n",str);
}

int UpperCaseTolowercase(char *str)
{
	int i;
	printf("Input = %s\n",str);
	
	for(i=0;i<10;i++)
	{
		str[i] = str[i]+32;
		
	}
	printf("UpperCase to LowerCase = %s\n",str);
}
