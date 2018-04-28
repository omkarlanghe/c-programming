#include <stdio.h>
#include <stdlib.h>

void Free(int ***arr, const int rows)
{
    if(arr)
    {
        int **array = *arr;
        if(array)
        {
            for(int i = 0 ; i < rows ; i++)
            {
                free(array[i]);
                array[i] = NULL;
            }
            free(array);
            array = NULL;
            *arr = NULL;
        }
    }
}

int **Allocate(const int rows, const int cols)
{
    int **array = NULL;
    array = (int**)malloc(rows*sizeof(int*));
    if(array != NULL)
    {
        for(int i = 0 ; i < rows ; i++)
        {
            array[i] = (int*)malloc(cols*sizeof(int));
            if(array[i] == NULL)
            {
                //it might happen i - 0,1 allocated but for 2 it failed. Below loop will free the already allocated rows.
                Free(&array, i);
                break;
            }
        }
    }
    return array;
}


int **Accept(int **array, const int rows, const int cols)
{
    if(NULL == array)
    {
        array = Allocate(rows, cols);
    }
    if(array)
    {
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                scanf("%d", &array[i][j]);
    }
    return array;
}

void Display(const int** const array, const int rows, const int cols)
{
    if(array)
    {
        for(int i = 0 ; i < rows ; i++)
        {
            for(int j = 0 ; j < cols ; j++)
                printf("%d\t", array[i][j]);
            printf("\n");
        }
    }
}
void ColumnMajorDisplay(const int ** const array, const int rows, const int cols){}
void IsSymmetric(const int**const matrix, const int rows, const int cols){}

//Matrix Operations
int** Add(const int**const matrix1, const int**const matrix2, const int rows, const int cols)
{
	int **resultMatrix = NULL;
	if(matrix1 && matrix2)
	{
		resultMatrix = Allocate(rows,cols);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				resultMatrix[i][j] = matrix1[i][j]+*(*(matrix2+i)+j);
				//*(*(resultMatrix+i)+j) = *(*(matrix1+i)+j) + *(*(matrix2+i)+j)
			}
		}
	}
	return resultMatrix;

}
void Sub(const int**const matrix1, const int**const matrix2, const int rows, const int cols, int **result)
{
	int **resultMatrix = NULL;
	if(matrix1 && matrix2)
	{
		resultMatrix = Allocate(rows,cols);
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				resultMatrix[i][j] = matrix1[i][j] - *(*(matrix2+i)+j);
			}
		}
	}
	return resultMatrix;	
}
int** Multiply(const int**const matrix1, const int**const matrix2, const int rows1, const int cols1, const int cols2)
{
	int **result = NULL;
	if(matrix1 && matrix2)
	{
		result = Allocate(rows1,cols2);
		for(int i=0;i<rows1;i++)
		{
			for(int j=0;j<cols2;j++)
			{
				for(int k=0;k<cols1;k++)
				{
					result[i][j] += matrix1[i][k]*matrix2[k][j];
				}
			}
		}
	}
}
