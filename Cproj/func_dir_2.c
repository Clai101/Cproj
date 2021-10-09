#include "Header_for_C.h"

int** make_matrix(unsigned short colums, unsigned short lines)
{
    int** matrix_1;
    int time_value;
    matrix_1 = (int**)malloc(lines * sizeof(int*));
    for (int i = 0; i < lines; i++)
    {
        if (matrix_1)
        {
            matrix_1[i] = (int*)malloc(colums * sizeof(int));
        }
        for (int j = 0; j < colums; j++)
        {
            time_value = i_find_st_input("element of matrix", -10000, 10000);
            printf("matrix_1[%d][%d] = %d\n", i+1, j+1, time_value);
            if (matrix_1)
            {
                matrix_1[i][j] = time_value;
            }
        }
    }
    return matrix_1;
}

int* converce_matrix(int** matrix, unsigned short colums, unsigned short lines)
{
    int* Q;
    int n = 0;
    Q = (int*)malloc((colums * lines) * sizeof(int));
    for (int colum = 0; colum < colums; colum++)
    {
        for (int line = 0; line < lines - 1; line++)
        {
            if (matrix[line][colum] < 0)
            {
                for (int k = line+1; k < lines; k++)
                {
                    n++;
                    Q[n] = matrix[k][colum];
                }
                break;
            }
        }
    }
    printf("%d\n", n);
    if (Q)
    {
        Q[0] = (int)(n);
    }
    return Q;
}

unsigned short main_decay(int number)
{
    unsigned short critarion = 0;
    number = abs(number);
    while (number >= 10)
    {
        number = number / 10;
    }
    while (!((critarion <= number) && (number < critarion + 1)))
    {
        critarion++;
    }
    return critarion;
}

int* filter_by_digit(int* arr, unsigned short len_arr, unsigned short critarion)
{
    int* new_arr;
    unsigned short n = 0;
    new_arr = (int*)malloc((len_arr + 1) * sizeof(int));
    for (unsigned short i = 0; i < len_arr; i++)
    {
        if (main_decay(arr[i]) == critarion)
        {
            n++;
            new_arr[n] = arr[i];
        }
    }
    new_arr[0] = n;
    return new_arr;
}



