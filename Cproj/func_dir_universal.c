#include "Header_for_C.h"

double d_find_st_input(char* name_of_value_e, long double down_border, long double up_border)
{
	long double time_float;
	while (0 == 0)
	{
		printf("Please, enter number %s, which is belonged to [%llf, %llf]: ", name_of_value_e, down_border, up_border);
		if (!scanf("%lf", &time_float))
		{
			printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN\n");
			for (int c = getchar(); c != '\n' && c != EOF; c = getchar());
			continue;
		}
		if ((time_float > up_border) || (time_float < down_border))
		{
			printf("Wrong interval was taken.\n[%llf, %llf] was expected.\nTRY AGAIN\n", down_border, up_border);
			continue;
		}
		break;
	}
	return time_float;
}

char* st_find_st_input(char* name_of_value_e, unsigned short* long_)
{
	fflush(stdin);
	char time_char, * string;
	unsigned short len = 1;
	printf("Please, enter string %s: ", name_of_value_e);
	string = (char*)malloc(1 * sizeof(char));
	while ((time_char = getchar()) != '\n') {
		string[len - 1] = time_char;
		len++;
		string = (char*)realloc(string, len);
	}
	string[len - 1] = '\0';
	long_[0] = len-1;
	fflush(stdin);
	return string;
}

unsigned short us_find_st_input(char* name_of_value, long long int down_border, long long int up_border)
{
	long long int time_LLI;
	while (0 == 0)
	{
		printf("Please, enter integer digit %s, which is belonged to [%lld, %lld]: ", name_of_value, down_border, up_border);
		if (!scanf("%lli", &time_LLI))
		{
			printf("Wrong type of data was taken.\nInteger  was expected.\nTRY AGAIN\n");
			for (int c = getchar(); c != '\n' && c != EOF; c = getchar());
			continue;
		}
		if ((time_LLI > up_border) || (time_LLI < down_border))
		{
			printf("Wrong interval was taken.\nExpected [%lld, %lld].\nTRY AGAIN\n", down_border, up_border);
			continue;
		}
		break;
	}
	unsigned short time_short = (unsigned short)time_LLI;
	return time_short;
}

int i_find_st_input(char* name_of_value, long long int down_border, long long int up_border)
{
	long long int time_LLI;
	while (0 == 0)
	{
		printf("Please, enter integer digit %s, which is belonged to [%lld, %lld]: ", name_of_value, down_border, up_border);
		if (!scanf("%lli", &time_LLI))
		{
			printf("Wrong type of data was taken.\nInteger  was expected.\nTRY AGAIN\n");
			for (int c = getchar(); c != '\n' && c != EOF; c = getchar());
			continue;
		}
		if ((time_LLI > up_border) || (time_LLI < down_border))
		{
			printf("Wrong interval was taken.\nExpected [%lld, %lld].\nTRY AGAIN\n", down_border, up_border);
			continue;
		}
		break;
	}
	int time_short = (int)time_LLI;
	return time_short;
}

double* append(double* arr, double new_element, unsigned short arr_len)
{
	double* new_arr;
	new_arr = (double*)malloc((arr_len + 1) * sizeof(double));
	for (int i = 0; i < arr_len; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[arr_len + 1] = new_element;
	return new_arr;
}

double* castling(double* main_arry, unsigned short n)
{
	double* main_arry_2;
	main_arry_2 = (double*)malloc(n * sizeof(double));
	if (main_arry_2)
	{
		for (int i = 0; i != n; i++)
		{
			*(main_arry_2 + i) = *(main_arry + 1 + i);
		}
	}
	return main_arry_2;
}

int* castling_i(int* main_arry, unsigned short n)
{
	int* main_arry_2;
	main_arry_2 = (int*)malloc(n * sizeof(int));
	if (main_arry_2)
	{
		for (int i = 0; i != n; i++)
		{
			*(main_arry_2 + i) = main_arry[1 + i];
		}
	}
	return main_arry_2;
}

double* make_arr(unsigned short _long)
{
	double* arry;
	arry = (double*)malloc(_long * sizeof(double));
	if (arry)
	{
		for (int i = 0; i != _long; i++)
		{
			*(arry + i) = i + 1;
		}
	}
	return arry;
}

double** make_matrix(unsigned short colums, unsigned short lines)
{
	double** matrix_1;
	int time_value;
	matrix_1 = (double**)malloc(lines * sizeof(double*));
	for (int i = 0; i < lines; i++)
	{
		if (matrix_1)
		{
			matrix_1[i] = (double*)malloc(colums * sizeof(double));
		}
		for (int j = 0; j < colums; j++)
		{
			time_value = d_find_st_input("element of matrix", -1000, 1000);
			printf("matrix_1[%d][%d] = %d\n", i + 1, j + 1, time_value);
			if (matrix_1)
			{
				matrix_1[i][j] = time_value;
			}
		}
	}
	return matrix_1;
}

unsigned short bin_search(unsigned short _long, double* arry, double new_element)
{
	unsigned short down_border = 1, up_border = _long + 1, point, last_point = 65333;
	while (true)
	{
		point = (down_border + up_border) / 2;
		if (arry[point] == new_element)
			return 0;
		if (point == last_point)
		{
			if (arry[point] > new_element)
				return point;
			else
				return point + 1;
		}
		if (arry[point] > new_element)
		{
			up_border = point;
			last_point = point;
			continue;
		}
		if (arry[point] < new_element)
		{
			down_border = point;
			last_point = point;
			continue;
		}
	}
}