#include "Header_for_C.h"

int main()
{
    printf("Laboratory work 3 was made by Karibdzhanov Matvei. Variant 148.\n");
    printf("Part 1\n\n");
    double c, a, b, d, e, f, up_value, low_value, x, y;
    bool err = false;
    a = d_find_st_input("a", -1000, 1000);b = d_find_st_input("b", -1000, 1000);
    c = d_find_st_input("c", -1000, 1000);d = d_find_st_input("d", -1000, 1000);
    e = d_find_st_input("e", -1000, 1000);f = d_find_st_input("f", -1000, 1000);
    __try
    {
        up_value = deviding_and_difference(f, d, c, a); low_value = deviding_and_difference(e, d, b, a);
        x = deviding_and_difference((c / a), b, up_value, a * low_value); y = up_value / low_value;
    }
    __finally{}
    if (a == 0 || low_value == 0)
        printf("You can't divide on zero\n\n");
    else
    {
        printf("x = %lf\n", x);
        printf("y = %lf\n\n", y);
    }    

    printf("Part 2\n\n");
    unsigned short lines, colums;
    lines = us_find_st_input("qantity of lines", 2, 100);
    colums = us_find_st_input("qantity of colums", 2, 100);
    double** matrix = make_matrix(colums, lines), min_of_max;

    printf("\nYour matrix\n");
    for (int i = 0; i < lines; i++)
    {
        printf("|");
        for (int j = 0; j < colums; j++)
        {
            if (matrix)
                printf("%g\t", matrix[i][j]);
        }
        printf("|\n");
    }
    min_of_max = find_max_min(colums, lines, matrix);
    printf("\nSearched element is equal  to %g\n\n", min_of_max);

    printf("Part 3\n\n");
    double* set = (double*)malloc(2 * sizeof(double)), * arr;
    unsigned short _long = us_find_st_input("long of array", 1, 60000);
    arr = (double*)malloc(_long * sizeof(double));
    for (unsigned short i = 0; i < _long; i++)
        arr[i] = (double)d_find_st_input("element of array", -1000, 1000);
    set[0] = 1;
    set[1] = arr[0];
    for (unsigned short i = 1; i < _long; i++)
        set = add_to_set(set[0], set, arr[i]);

    printf("\n\nArray before\n[");
    for (int i = 0; i < _long; i++)
        printf("%g  ", arr[i]);
    printf("]\n\n");
    printf("Array after\n[");
    for (int i = 1; i < set[0] + 1; i++)
        printf("%g  ", set[i]);
    printf("]\n\n");


    return 0;
}