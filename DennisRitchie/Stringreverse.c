#include<stdio.h>

int main()
{
	char string[100];
	char *ptr;
	int count=0;
	
	printf("Enter the string to reverse:\n");
	scanf("%[^\n]s",string);
	
	ptr = string;
	
	while(*ptr != '\0')
	{
		count++;
		ptr++;
	}
	
	printf("reverse string is:\n");
	while(count>=0)
	{
		printf("%c",*ptr--);
		count--;
	}
	
	printf("\n");
	
	return 0;
}
