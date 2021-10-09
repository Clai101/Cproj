#include "Header_for_C.h"

double** make_matrix(unsigned short x, unsigned short y)
{
    double** matrix_1;
    double time_value;
    matrix_1 = (double**)malloc(x * sizeof(double*));
    printf("matrix[%d][%d]\n", x, y);
    for (int i = 0; i < x; i++)
    {
        matrix_1[i] = (double*)malloc(y * sizeof(double));
        for (int j = 0; j < y; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &time_value);
            matrix_1[i][j] = time_value;
            break;
        }
    }
    return matrix_1;
}

int* converce_matrix(int** matrix, unsigned short x, unsigned short y)
{
    int* Q;
    int n = 1;
    Q = (int*)malloc(1 * sizeof(int));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y-1; j++)
        {
            if (matrix[i][j] < 0)
            {
                n++;
                Q = append(Q, matrix[i][j], n);
            }
        }
    }
    Q[0] = n - 1;
    return Q;
}