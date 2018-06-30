#include<stdio.h>
int stringPallidrome(char a[], int size);
int main()
{
	char a[200];
	int size;
	
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	
	printf("Enter the string in an array:\n");
	scanf("%s",&a);
	
	int result = stringPallidrome(a,size);
	
	if(result==0)
	{
		printf("Pallidrome\n");
	}
	else
	{
		printf("NotPallidrome\n");
	}
	
}

int stringPallidrome(char a[], int size)
{
	int flag = 0;
	
	for(int i=0,j=size-1; i<size/2; i++,j--)
	{
		if(a[i]!=a[j])
		{
			flag=1;
			break;
		}
	}
	return flag;
}
