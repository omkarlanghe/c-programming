/*
	write a program to swap two string using malloc in c.
*/

#include<stdio.h>
#include<stdlib.h>

void swapString(char **str1, char **str2);
int main()
{
	char *str1, *str2;
	int size1, size2;
	
	printf("Enter the size for string 1:\n");
	scanf("%d",&size1);
	
	printf("Enter the size for string 2:\n");
	scanf("%d",&size2);

	str1 = (char *)malloc(size1);
	str2 = (char *)malloc(size2);
	
	printf("Enter the string1:\n");
	scanf("%s",str1);
	
	printf("Enter the string2:\n");
	scanf("%s",str2);
	
	printf("String before swapping:\n%s %s\n",str1,str2);
	swapString(&str1,&str2);
	printf("String after swapping is:\n%s %s\n",str1,str2s);

	
	free(str1);
	free(str2);	
	
	return 0;
}

void swapString(char **str1, char **str2)
{
	char *temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}
