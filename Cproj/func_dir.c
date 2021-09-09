#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>

float* main_arry;

float find_st_float(char name_of_value)
{
	float time_float;
	printf("Please, enter digit %c, which is belonged to [-10, 10]: ", name_of_value);
	if (!scanf("%f", &time_float))
	{
		printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN\n");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_float > 10) | (time_float < -10))
	{
		printf("Wrong interval interval was taken.\n[-10, 10] was expected.\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	return time_float;
}

unsigned short find_st_short(char name_of_value)
{
	long long int time_LLI;
	printf("Please, enter integer digit %c, which is belonged to [1, 65530]: ", name_of_value);
	if (!scanf("%d", &time_LLI))
	{
		printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_LLI > 65530) || (time_LLI < 1))
	{
		printf("Wrong interval interval was taken.\nExpected [1, 65530].\nTRY AGAIN\n ");
		_Exit(EXIT_SUCCESS);
	}
	unsigned short time_short = time_LLI;
	return time_short;
}

float* make_arr(unsigned short n)
{
	main_arry = (float*)malloc(n * sizeof(float));
	for (int i = 0; i != n; i++)
	{
		*(main_arry + i) = i + 1;
	}
public: 
	main_arry;
	return main_arry;
}

float* use_sin(float* main_arry, unsigned short n)
{
	float a = 0, x = 0, h = 0;
	a = find_st_float('a');
	x = find_st_float('x');
	h = find_st_float('h');

	for (int i = 0; i != n; i++)
	{
		float time_value = *(main_arry + i);
		*(main_arry + i) = 1.25*sin(3*a*x - (time_value)*h);
	}
	return main_arry;
}

float* clean_by_index(float* main_arry, unsigned short n)
{
	float* time_arry;
	unsigned short stap = 1;
	time_arry = (float*)malloc(n * sizeof(float));
	for (int i = 0; i != n; i++)
	{
		if ((*(main_arry + i) > 0) && ((*(main_arry + i) < (i + 1) / 3) || ((i + 1) >= 4)))
		{
			*(time_arry + stap) = *(main_arry + i);
			stap++;
		}
	}
	*(time_arry) = stap - 1;
	return time_arry;
}

float* castling(float* main_arry, unsigned short n)
{
	float* main_arry_2;
	main_arry_2 = (float*)malloc(n * sizeof(float));
	for (int i = 0; i != n; i++)
	{
		*(main_arry_2 + i) = *(main_arry + 1 + i);
	}
	return main_arry_2;
}

float find_average(float* main_arry, unsigned short n)
{
	float average = 0
		;
	for (int i = 0; i != n; i++)
	{
		average = average + *(main_arry + i);
	}
	return average / n;
}