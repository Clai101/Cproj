#include "Header_for_C.h"

int** make_matrix(unsigned short x, unsigned short y)
{
	int** matrix;
    matrix = (int**)malloc(x * sizeof(int*));
    for (int i = 0; i < x; i++)
    {
        matrix[i] = (int*)malloc(y * sizeof(int));
        for (int j = 0; j < y; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%lf", &(matrix[i][j]));
        }
    }
    return matrix;
}

int* converce_matrix(int** matrix, unsigned short x, unsigned short y)
{
    int* Q;
    int n = 1;
    Q = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y-1; j++)
        {
            if (matrix[i][j] < 0)
            {
                *(Q + n) = matrix[i][j+1];
                n++;
                Q = (int*)malloc(n * sizeof(int));
            }
        }
    }
    *Q = n-1;
    return Q;
}



