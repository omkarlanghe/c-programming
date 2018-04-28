#include<stdio.h>

int main()
{
	char string[20],ch;
	int i,count=0;
	
	printf("Enter the string:\n");
	scanf("%s",string);
	
	printf("Enter the character to check its occurance:\n");
	scanf(" %c",&ch);
	
	while(string[i] != '\0')
	{
		
		if(string[i] == ch)
		{
			count++;
		}
		string[i++];
	}
	printf("Character count is: %d\n",count);
	
	return 0;
	
}
