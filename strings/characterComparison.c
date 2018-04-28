#include<stdio.h>

int strlength(const char *string);
int strCompare(const char *string1, const char *string2, unsigned n);


int main()
{
	char string1[20],string2[20];
	int n;
	
	printf("Enter the string 1:\n");
	scanf("%s",string1);
	
	printf("Enter the string 2:\n");
	scanf("%s",string2);
	
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	
	int result = strCompare(string1,string2,n);
	
	if(result==0)
	{
		printf("String Matched..\n");
	}
	else if(result==1)
	{
		printf("String doesn't matched..\n");
	}
	else if(result==-1)
	{
		printf("Error..\n");
	}
	return 0;	
}

int strlength(const char *string)
{
	int count=0,i;
	
	while(*string != '\0')
	{
		count++;
		string++;
	}
	
	return count;
}

int strCompare(const char *string1, const char *string2, unsigned n)
{
	int retVal = 0;
	
	int length1 = strlength(string1);
	int length2 = strlength(string2);
	
	if(n>length1 || n>length2)
	{
		return -1;
	}
	else
	{
		while(n!=0 && *string1 == *string2)
		{
			string1++;
			string2++;
			n--;
		}
	}
	if(n!=0)
	{
		return 1;
	}
	return retVal;
	
}
