#include<stdio.h>

int main()
{
	char string[30];
	
	printf("Enter the string to be reversed:\n");
	scanf("%s",string);
	
	StringReverseDisplay(string);
	
	return 0;
}
void StringReverseDisplay(const char *string)
{
	if(*string == '\0')
	{
		return;
	}
	
	StringReverseDisplay(string+1);
	
	printf("Reversed String is:%c\n",*string);
}
