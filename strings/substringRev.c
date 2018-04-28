#include<stdio.h>

int main()
{
	char string1[20],string2[20];
	int i,count=0;
	char temp[20];
	
	printf("Enter the string:\n");
	scanf("%s",string1);
	
	
	printf("Enter the 2nd String:\n");
	scanf("%s",string2);
	
	while(string1[i] != '\0')
	{
		count++;
		string1[i++];
	}
	
	printf("length of the string is:%d\n",count);
	printf("\n");
	printf("The Reverse of the string is:\n");
	
	while(count>=0)
	{
		temp[i++] = string1[i--];
		printf("%c",temp[i++]);
		count--;
	}
	printf("\n");
	
	if(temp == string2)
	{
		printf("String 2 is reverse of String 1\n");
	}
	else
	{
		printf("Not Reverse\n");
	}
	
	return 0;
	
}
