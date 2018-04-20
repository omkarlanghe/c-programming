/*
	write a program to print all input lines that are longer than 80 characters.
*/
#include<stdio.h>
//omkarlangheisthebestmanin the world

int main()
{
	char array[100];
	int limit;
	
	printf("Enter the words:\n");
	scanf("%[^\n]s",array);
	
	printf("Enter the limit of characters to print the message once exceed:\n");
	scanf("%d",&limit);
	
	//printf("Count is:%d\n",charcount(array));
	int result = charcount(array);
	if(result>limit)
	{
		printf("%s\n",array);
	}
	else
	{
		printf("please provide the valid limit to print the line:\n");
	}
	return 0;
}

int charcount(const char *array)
{
	int count=0;
	while(*array != '\0')
	{
			count++;
			array++;
	}
	return count;
}
