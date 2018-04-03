/*
	Write a program to accept an array of integers and display the average of even numbers and odd numbers out of them.
*/
#include<stdio.h>

int main()
{
	int i,a[200],size;
	
	printf("Enter the size for an array:\n");
	scanf("%d",&size);
	
	printf("Enter the elements in an array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int result = Pallidrome(a,size);
	
	if(result==1)
	{
		printf("pallidrome\n");
	}
	else
	{
		printf("notPallidrome\n");
	}
}

int Pallidrome(int a[],int size)
{
	int i,j;
	int flag=1; //assuming string is pallidrome
	
	for(i=0,j=size-1; i<size/2; i++,j--)
	{
		if(a[i]!=a[j])
		{
			flag=0;
			break;
		}
	}
	return flag;
}


