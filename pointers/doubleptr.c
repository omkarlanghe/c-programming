/*
	write a program to accept the dimensions of matrix from user, create matrix dynamically, accept and display the matrix, & free the matrix.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n; //m->row and n->col
	int **arr;
	
	printf("Enter the size of the row:\n");
	scanf("%d",&m);
	
	printf("Enter the size of the column:\n");
	scanf("%d",&n);
	
	arr = (int **)malloc(m*sizeof(int *));
	
	printf("Enter the values of m and n:\n");
	for(int i=0;i<m;i++)
	{
		arr[i] = (int *)malloc(n*sizeof(int)); //creating memory for m number of rows..
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]); //loop for taking input of rows and columns from user
		}
	}
	printf("\n");
	printf("Matrix is:");
	for(int i=0;i<m;i++)
	{
		printf("\n");
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]); //loop for displaying the matrix.
		}
	}
	
	for(int i=0;i<m;i++)
	{	
		free(arr[i]); //first free the memory of all elements from array of column
	}
	free(arr); //then free the memory of the actual array of pointers, i.e **arr
	
	return 0;
}
