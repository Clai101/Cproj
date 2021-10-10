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