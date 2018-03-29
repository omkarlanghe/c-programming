/*
	program to calculate length of string using pointers.
*/

#include<stdio.h>

int main()
{

	char name[30];
	char *ptr;
	int i=0;
	
	printf("Enter the string:\n");
	scanf("%s",name);
	
	ptr = name;

	while(*ptr!='\0')
	{
		i++;
		ptr++;
	}
	
	printf("String length:%d\n",i);
		
}
