#include "matrix_operations.h"
#include <stdio.h>

void SimulateMatrixOperations()
{
    int m = 3,n =3;
    //accept m,n from user
    int **array = Allocate(m,n);
    printf("\nEnter %d*%d elements:", m,n);
    array = Accept(array, m, n);
    printf("\nDisplaying Matrix %d*%d:\n", m, n);
    Display(array, m, n);
    //Add(array,m,n);
    Free(&array, m);
}
int main()
{
    SimulateMatrixOperations();
    return 0;
}
