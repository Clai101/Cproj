#include "Header_for_C.h"

int main()
{
	printf("Laboratory work 2 was made by Karibdzhanov Matvei. Variant 148.\n");

	//Инициализация
	unsigned short colums, lines;
	colums = us_find_st_input("colums", 2, 60000);
	lines = us_find_st_input("line", 2, 60000);
	printf("_________Creating matrix [%dx%d]_________\n", lines, colums);
	int** matrix = make_matrix(colums, lines);
	printf("____________Creating compleat____________\n", lines, colums);

	printf("Matrix\n", lines, colums);
	for (int i = 0; i < lines; i++)
	{
		printf("|");
		for (int j = 0; j < colums; j++)
		{
			printf("%i\t", matrix[i][j]);
		}
		printf("|\n");
	}

	//Пункт 1
	int* time_arr_1 = converce_matrix(matrix, lines, colums);
	unsigned short len_arr = time_arr_1[0];
	int* arr_1 = castling_i(time_arr_1, len_arr);
	if (len_arr == 0)
	{
		printf("There are not anyone negative elements in matrix.\n");
		_Exit(EXIT_SUCCESS);
	}
	for (int iter = 0; iter < len_arr; iter++)
	{
		printf("%i ", *(iter + arr_1));
	}
	printf("\n");

	//Пункт 2
	unsigned short criter = us_find_st_input("critarion", 0, 9);
	int* time_arr_2 = filter_by_digit(arr_1, len_arr, criter);
	len_arr = time_arr_2[0];
	int* arr_2 = castling_i(time_arr_2, len_arr);
	if (len_arr == 0)
	{
		printf("There are not anyone elements, which are satisfy the condition, in arry.\n");
		_Exit(EXIT_SUCCESS);
	}
	for (int iter = 0; iter < len_arr; iter++)
	{
		printf("%i ", *(iter + arr_2));
	}
	printf("\n");
}