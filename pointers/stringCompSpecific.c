/*
	program to accept two strings from user and no.of characters to compare,perform comparison of specified no.of characters of two strings.
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10],str2[10];
	unsigned int n;
	
	printf("\n Enter the string1:");
	scanf("%s",str1);
	
	printf("\n Enter the string2:");
	scanf("%s",str2);
	
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	
	int result = str_n_comp(str1,str2,n);
	
	if(result == 0)
	{
		printf("\n String Matched..");
	}
	else if(result == 1)
	{
		printf("\n String doesn't Matched..");
	}
	else if(result == -1)
	{
		printf("\n Error Occured..");
	}
	
	return 0;
}

int str_n_comp(const char *string1, const char * string2, unsigned n)
{
	int retVal = 0;

	unsigned int len1 = str_len(string1);
	unsigned int len2 = str_len(string2);
	
	if(n>len1 || n>len2)
	{
		retVal = -1;
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
		retVal = 1;
	}
	return retVal;
}

int str_len(const char *string)
{
	int count=0;
	
	while(*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
