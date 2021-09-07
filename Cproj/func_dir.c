#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>


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
	printf("Please, enter a: ");
	if (!scanf("%f", &a))
	{
		printf("Wrong type of data was taken \n");
		_Exit(EXIT_SUCCESS);
	}
	printf("Please, enter x: ");
	if (!scanf("%f", &x))
	{
		printf("Wrong type of data was taken \n");
		_Exit(EXIT_SUCCESS);
	}
	printf("Please, enter h: ");
	if (!scanf("%f", &h))
	{
		printf("Wrong type of data was taken \n");
		_Exit(EXIT_SUCCESS);
	}

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
		if (*(main_arry + i) < 0)
		{
			if (*(main_arry + i) > time_max)
			{
				time_max = *(main_arry + i);
				index = i + 1;
			}
		}
	}
	return index;
}

