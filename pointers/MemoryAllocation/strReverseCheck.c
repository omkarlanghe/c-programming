#include<stdio.h>
#include<stdlib.h>

int stringReverse(char *str1, char *str2, int size);
int main()
{
	char *str1,*str2;
	int size;
	
	printf("Enter the size of an arrayString:\n");
	scanf("%d",&size);
	
	str1 = (char *)malloc(size*sizeof(int));
	str2 = (char *)malloc(size*sizeof(int));
	
	printf("Enter the string1:\n");
	scanf("%s",str1);
	
	printf("Enter the string2:\n");
	scanf("%s",str2);
	
	stringReverse(str1,str2,size);	
	free(str1);
	free(str2);
	
	return 0;
}

int stringReverse(char *str1, char *str2, int size)
{	
	char temp1,temp2;

	//reversing the string
	for(int i=size;i>=0;i--)
	{	
		temp1 = str1[i];
	}
	
	for(int i=0;i<size;i++)
	{
		temp2 = str2[i];
	}
	
	if(temp1==temp2)
	{
		printf("2nd string is reverse of 1st string\n");
	}
	else
	{
		printf("2nd string is not reverse of 1st string\n");
	}
}
