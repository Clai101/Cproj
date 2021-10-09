#include "Header_for_C.h"

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
	a = d_find_st_input("a", -10.0, 10.0);
	x = d_find_st_input("x", -10.0, 10.0);
	h = d_find_st_input("h", -10.0, 10.0);

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