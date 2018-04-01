/*
	write a program to accept two strings from user and concatinate them.
*/
#include<stdio.h>
#include<string.h>
int stringConcatinate(char *str1, char *str2);
int main()
{
	char str1[20],str2[20];
	
	printf("Enter the first string:\n");
	scanf("%s",str1);
	
	printf("Enter the second string:\n");
	scanf("%s",str2);
	
	stringConcatinate(str1,str2);
	
	printf("Concatinated strings are:%s\n",str1);
	
	return 0;
}

int stringConcatinate(char *str1, char *str2)
{
	while(*str1)
	{
		str1++;
	}
	while(*str2)
	{
		*str1 = *str2;
		str2++;
		str1++;
	}
	*str1 = '\0';
	
}
