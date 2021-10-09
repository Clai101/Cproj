#include "Header_for_C.h"

double d_find_st_input(char name_of_value_e, long double down_border, long double up_border)
{
	long double time_float;
	printf("Please, enter number %c, which is belonged to [%llf, %llf]: ", name_of_value_e, down_border, up_border);
	if (!scanf("%lf", &time_float))
	{
		printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN\n");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_float > up_border) || (time_float < down_border))
	{
		printf("Wrong interval was taken.\n[%llf, %llf] was expected.\nTRY AGAIN\n ", down_border, up_border);
		_Exit(EXIT_SUCCESS);
	}
	return time_float;
}

unsigned short us_find_st_input(char name_of_value, long long int down_border, long long int up_border)
{
	long long int time_LLI;
	printf("Please, enter integer digit %c, which is belonged to [%lld, %lld]: ", name_of_value, down_border, up_border);
	if (!scanf("%lli", &time_LLI))
	{
		printf("Wrong type of data was taken.\nNumber was expected.\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_LLI > up_border) || (time_LLI < down_border))
	{
		printf("Wrong interval was taken.\nExpected [%lld, %lld].\nTRY AGAIN\n ", down_border, up_border);
		_Exit(EXIT_SUCCESS);
	}
	unsigned short time_short = time_LLI;
	return time_short;
}

double* append(double* arr, double new_element, unsigned short arr_len)
{
	double* new_arr;
	new_arr = (double*)malloc((arr_len + 1) * sizeof(double));
	for (size_t i = 0; i < arr_len; i++)
	{
		new_arr[i] = arr[i];
	}
	new_arr[arr_len + 1] = new_element;
	return new_arr;
}