#include<stdio.h>

int main()
{
	char string[20];
	int i,count=0;
	char ch;
	printf("Enter the string:\n");
	scanf("%s",string);
	
	printf("String Entered is:%s\n",string);
	
	printf("Enter the character to search its index position:\n");
	scanf(" %c",&ch);

	if(string[i] =='\n')
	{
		printf("Empty string\n");
	}	
	while(string[i]!='\0')
	{
		count++;
		if(string[i] == ch)
		{
			printf("Element found at position %d\n",count);
		}
		string[i++];
	}	
	//printf("string length:%d\n",count);
	
	return 0;
}

