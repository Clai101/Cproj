#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>

float* make_arr(unsigned short n)
{
	float* main_arry;  // указатель на массив
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
	float a, x, h;
	printf("Please, enter a: ");
	scanf("%f \n", &a);
	printf("Please, enter x: ");
	scanf("%f \n", &x);
	printf("Please, enter h: ");
	scanf("%f \n", &h);

	for (int i = 0; i != n; i++)
	{
		float time_value = *(main_arry + i);
		*(main_arry + i) = 1.25*sin(3*a*x - (time_value)*h);
	}
	return main_arry;
}