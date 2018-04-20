#include<stdio.h>

int main()
{
	char string[100];
	char ch;
	int count=0;
	char *ptr = string;
	printf("Enter the string to check:\n");
	scanf("%s",string);
	
	
	printf("string before modification is:%s\n",string);
	
	
	printf("Enter the character to check its occurance:\n");
	scanf(" %c",&ch);
	
	while(*ptr != '\0')
	{
		if(*ptr == ch)
		{
			
			count++;
			
		}
		
		ptr++;
	*ptr = '\0';	
	}
	//printf("count of the character is:%d\n",count);
	printf("charcter count is:%c\n",ptr);	
	
	return 0;
		
}
