#include<stdio.h>

int main()
{
	char string[20],ch;
	int i,count=0;
	
	printf("Enter the string:\n");
	scanf("%s",string);
	
	while(string[i]!='\0')
	{
		count++;
		string[i++];
		if(string[i] == '\0')
		{
			printf("Position of Rightmost occurance of character is %d\n",count);
		}	
	}
	return 0;
}
