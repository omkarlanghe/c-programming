#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *to_lower(const char * const string);
int str_len(const char *string);

int main()
{
	char string[10];
	printf("Enter the upper case string:\n");
	scanf("%s",string);
	
	printf("Entered = %s",string);
	char *res = to_lower(string);
	
	printf("Original = %s LowerCase = %s",string,res);
	
	free(res);
	return 0;
}

char *to_lower(const char * const string)
{
	int i=0;
	char *result = (char *)malloc(str_len(string)+1);
	
	while(string[i] != '\0')
	{
		if(*(string+i)>=65 && *(string+i)<=91)
		{
			result[i] = string[i]+32;
			i++;
		}
		else
		{
			result[i] = string[i];
		}		
	}
	result[i] = '\0';
	return result;
}

int str_len(const char *string)
{
	int count = 0;
	
	while(*string != '\0');
	{
		count++;
		string++;
	}
	return count;
}
