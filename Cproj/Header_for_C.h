#ifndef HEADER_H_C
#define HEADER_H_C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Общие
unsigned short us_find_st_input(char name_of_value, long long int down_border, long long int up_border);
double d_find_st_input(char name_of_value_e, long double down_border, long double up_border);
double* castling(double* arr, unsigned short arr_len);
double* append(double* arr, double new_element ,unsigned short arr_len);

//Лаба 2
int** make_matrix(unsigned short x, unsigned short y);
int* converce_matrix(int** matrix, unsigned short x, unsigned short y);

//Лаба 1
double* make_arr(unsigned short);
double* use_sin(double*, unsigned short);
double* clean_by_index(double*, unsigned short);
double find_average(double*, unsigned short);


#endif