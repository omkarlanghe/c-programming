#include<stdio.h>
#include<stdlib.h>
int string_Pallidrome(char *string, int size);
int main()
{
	char *string;
	int size;
	
	printf("Enter the size of the string:\n");
	scanf("%d",&size);
	
	string = (char *)malloc(size*sizeof(int));
	
	printf("Enter the string:\n");
	scanf("%s",string);
	
	int result = string_Pallidrome(string,size);
	
	if(result==0)
	{
		printf("string is pallidrome\n");
	}
	else
	{
		printf("string is not pallidrome\n");
	}
	
	free(string);
	return 0;

}
int string_Pallidrome(char *string, int size)
{
	int flag = 0;
	for(int i=0,j=size-1;i<size/2;i++,j--)
	{
		if(string[i]!=string[j])
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
