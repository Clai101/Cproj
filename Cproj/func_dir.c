#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

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
