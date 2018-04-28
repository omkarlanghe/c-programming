#include<stdio.h>

int main()
{
	char string[20];
	int i,count=0;
	
	printf("Enter the string:\n");
	scanf("%s",string);
	
	while(string[i] != '\0')
	{
		count++;
		string[i++];
	}
	
	printf("length of the string is:%d\n",count);
	printf("\n");
	printf("The Reverse of the string is:\n");
	
	while(count>=0)
	{
		printf("%c",string[i--]);
		count--;
	}
	printf("\n");
	return 0;
	
}
