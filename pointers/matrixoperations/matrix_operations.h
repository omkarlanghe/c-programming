//header guards which prevents multiple times inclusion of same prototypes
#ifndef MATRIX_OPERATIONS
#define MATRIX_OPERATIONS

int **Allocate(const int rows, const int cols);
int **Accept(int **array, const int rows, const int cols);
void Display(const int** const array, const int rows, const int cols);
void Free(int ***array, const int rows);
void ColumnMajorDisplay(const int ** const array, const int, const int);
void IsSymmetric(const int**const, const int, const int);
//Matrix Operations
int** Add(const int**const matrix1, const int**const matrix2, const int rows, const int cols);
void Sub(const int**const matrix1, const int**const matrix2, const int rows, const int cols, int **result);
int** Multiply(const int**const matrix1, const int**const matrix2, const int rows1, const int cols1, const int cols2);
#endif
