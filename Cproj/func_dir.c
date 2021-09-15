#include "Header_for_C.h"

double find_st_double(char name_of_value)
{
	double time_float;
	printf("Please, enter number %c, which is belonged to [-10, 10]: ", name_of_value);
	if (!scanf("%lf", &time_float))
	{
		printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN\n");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_float > 10) || (time_float < -10))
	{
		printf("Wrong interval was taken.\n[-10, 10] was expected.\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	return time_float;
}

unsigned short find_st_short(char name_of_value)
{
	long long int time_LLI;
	printf("Please, enter integer digit %c, which is belonged to [1, 65530]: ", name_of_value);
	if (!scanf("%lld", &time_LLI))
	{
		printf("Wrong type of data was taken.\nNumber was expected.\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_LLI > 65530) || (time_LLI < 1))
	{
		printf("Wrong interval was taken.\nExpected [1, 65530].\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	unsigned short time_short = time_LLI;
	return time_short;
}

double* make_arr(unsigned short n)
{
	double* main_arry;
	main_arry = (double*)malloc(n * sizeof(double));
	if(main_arry)
	{
		for (int i = 0; i != n; i++)
		{
			*(main_arry + i) = i + 1;
		}
	}
	main_arry;
	return main_arry;
}

double* use_sin(double* main_arry, unsigned short n)
{
	double a = 0, x = 0, h = 0;
	a = find_st_double('a');
	x = find_st_double('x');
	h = find_st_double('h');

	for (int i = 0; i != n; i++)
	{
		double time_value = *(main_arry + i);
		*(main_arry + i) = 1.25*sin(3*a*x - (time_value)*h);
	}
	return main_arry;
}

double* clean_by_index(double* main_arry, unsigned short n)
{
	double* time_arry;
	unsigned short stap = 1;
	time_arry = (double*)malloc(n * sizeof(double));
	for (int i = 0; i != n; i++)
	{
		if (*(main_arry + i) > 0)
		{
			if ((i + 1) >= 4)
			{
				*(time_arry + stap) = *(main_arry + i);
				stap++;
			}
			else
			{
				if (*(main_arry + i) < (i + 1) / 3)
				{
					*(time_arry + stap) = *(main_arry + i);
					stap++;
				}
			}
		}
	}
	if (time_arry)
	{
		*(time_arry) = stap - 1;
	}
	if ((stap - 1) == 1)
	{
		printf("Part two answer:\n");
		printf("Sorry, there are not anyone elements, which satisfy the condition. It means that part tree has not got an answer too.");
		_Exit(EXIT_SUCCESS);
	}
	return time_arry;
}

double* castling(double* main_arry, unsigned short n)
{
	double* main_arry_2;
	main_arry_2 = (double*)malloc(n * sizeof(double));
	if(main_arry_2)
	{
		for (int i = 0; i != n; i++)
		{
			*(main_arry_2 + i) = *(main_arry + 1 + i);
		}
	}
	return main_arry_2;
}

double find_average(double* main_arry, unsigned short n)
{
	double average = 0
		;
	for (int i = 0; i != n; i++)
	{
		average = average + *(main_arry + i);
	}
	return average / n;
}