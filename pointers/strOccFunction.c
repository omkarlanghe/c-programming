#include<stdio.h>
#include<string.h>
int charcount(const char *string, const char ch);
int main()
{

	char string[30];
	char ch;
	
	printf("\n Enter the first string:");
	scanf("%s",string);
	
	printf("\n Enter the character to count its occurance:");
	scanf(" %c",&ch);
	
	printf("Occurance of the given character is:%d\n",charcount(string,ch));
	//charcount(string,ch);
	
	return 0;
	
}

int charcount(const char *string, const char ch)
{
	int count = 0;
	while(*string != '\0')
	{
		if(*string == ch)
		{
			count++;
			
		}
		string++;
	}
	return count;
}
