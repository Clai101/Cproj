#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>

float find_st_float(char name_of_value)
{
	float time_float;
	printf("Please, enter digit %c, wich is belinged to [-100, 100]: ", name_of_value);
	if (!scanf("%f", &time_float))
	{
		printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN \n ");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_float > 20) | (time_float < -20))
	{
		printf("Wrong interval interval was taken.\n[-100, 100] was expected.\nTRY AGAIN \n ");
		_Exit(EXIT_SUCCESS);
	}
	return time_float;
}

unsigned short find_st_short(char name_of_value)
{
	unsigned short time_short;
	printf("Please, enter digit %c, wich is belinged to [1, 65534]: ", name_of_value);
	if (!scanf("%d", &time_short))
	{
		printf("Wrong type of data was taken.\nFloat was expected.\nTRY AGAIN \n ");
		_Exit(EXIT_SUCCESS);
	}
	if ((time_short > 65534) | (time_short < 0))
	{
		printf("Wrong interval interval was taken.\n[1, 65534] was expected.\nTRY AGAIN \n ");
		_Exit(EXIT_SUCCESS);
	}
	return time_short;
}

float* make_arr(unsigned short n)
{
	float* main_arry; 
	system("chcp 1251");
	system("cls");
	main_arry = (int*)malloc(n * sizeof(float));
	for (int i = 0; i != n; i++)
	{
		*(main_arry + i) = i + 1;
	}
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

unsigned short find_max_negative_element(float* main_arry, unsigned short n)
{
	float time_max = -2;
	unsigned short index = 65535;
	for (int i = 0; i != n; i++)
	{
		if ((*(main_arry + i) < 0) & (*(main_arry + i) > time_max))
		{
			time_max = *(main_arry + i);
			index = i + 1;
		}
	}
	return index;
}

float* sort_by_index()