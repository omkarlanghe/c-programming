#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	
	//fileCopying(c);
	//ErrorCheck(c);
	printf("count is:%d",count_characters(c));
	return 0;
}

int fileCopying(int c)
{
	
	c = getchar();
	
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return c;
}

int ErrorCheck(int c)
{
	c = getchar();
	
	if(c != EOF)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}
}
int count_characters(int c)
{
	long count;
	//c = getchar();
	
	while(getchar() != EOF)
	{
		++count;
	}
	return count;
}
