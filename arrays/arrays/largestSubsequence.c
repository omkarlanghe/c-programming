/*
	write a program to accept array from user and print its largest subsequence.(Asked in NPAV)
*/
#include<stdio.h>
#include<stdlib.h>
int consucutive(int *a,int length);
int main()
{
	int *a = NULL;
	int length;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&length);
	
	a = malloc(length*sizeof(int));
	
	printf("Enter the elements in array:\n");
	for(int i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int resultLength = consucutive(a,length);
	
	printf("Length of consucutive sequence is %d\n",resultLength);
	
	free(a);
	return 0;
}

int consucutive(int *a,int length)
{
	if(a == NULL)
	{
		return 0;
	}
	int result = 1;
	int seqLength = 1;
	for(int i=0;i<length-1;i++)
	{
		if(a[i+1] == a[i]+1)
		{
			seqLength++;
			if(i+1 == length-1 && seqLength > result)
			{
				result = seqLength;
			}
			continue;
			
		}
		else
		{
			if(seqLength > result)
			{
				result = seqLength;
			}
			seqLength = 1;
		}
	}
	return result;
}
