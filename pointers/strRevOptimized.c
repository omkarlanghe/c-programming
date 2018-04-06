#include<stdio.h>

int main()
{
	int count=0;
	char str[10];
	char *ptr;
	
	printf("Enter the string:\n");
	scanf("%s",str);
	
	ptr = str;
	
	while(*ptr!='\0')
	{
		ptr++;
		count++;
	}
	
	printf("string count is:%d\n",count);
	
	printf("The reverse string is:\n");
	
	while(count>=0)
	{
		printf("%c",*ptr--);
		count--;
	}
	printf("\n");
	return 0;
}	
