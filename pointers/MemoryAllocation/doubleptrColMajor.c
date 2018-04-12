/*
	write a program to display matrix in column and major format.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n;
	int **arr;
	
	printf("Enter the size of row:\n");
	scanf("%d",&m);
	
	printf("Enter the size of the column:\n");
	scanf("%d",&n);
	
	arr = (int **)malloc(m*sizeof(int *));
	
	printf("Enter the values of m and n:\n");
	for(int i=0;i<m;i++)
	{
		arr[i] = (int *)malloc(n*sizeof(int));
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	printf("Matrix is:");
	for(int i=0;i<n;i++)
	{
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf("%d",arr[j][i]);
		}
		
	}
	for(int i=0;i<m;i++)
	{
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}
