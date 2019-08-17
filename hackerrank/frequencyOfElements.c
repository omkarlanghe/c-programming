#include<stdio.h>
#include<stdlib.h>

void freq(char *,int, char);

int main()
{
	char *str = NULL,ch;
	int size = 0;

	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	str = (char *)malloc(size*sizeof(int));

	printf("Enter the elements in array:\n");
	scanf("%s",str);
	
	printf("Enter the element to count its frequency:\n");
	scanf(" %c",&ch);

	freq(str, size, ch);

	free(str);
	return 0;
}

void freq(char *str,int size,char ch)
{
	int count = 0,i = 0;

	while(*str != '\0')
	{
		if(str[i] == ch)
			count++;
		str++;
	}
	if(count >= 1)
		printf("frequency count of %c = %d\n",ch,count);
	else
		printf("Not Present");

}

