/*
	write a program to accept string from user and accept start index and length, return substring starting from start index and specified string length
	
*/
#include<stdio.h>

int main()
{
	char string[20];
	int i,Pos,count=0;
	int flag;
	
	printf("Enter the string:\n");
	scanf("%s",string);
	
	printf("Enter the index postion in the string:\n");
	scanf("%d",&Pos);
	
	
	while(string[i] != '\0')
	{
		
		if(i==Pos)
		{
			flag=1;
		}
		if(flag==1)
		{
			printf("%c",string[i]);	
		}
		i++;	
	}
	return 0;	
}
