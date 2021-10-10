#ifndef HEADER_H_C
#define HEADER_H_C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

//Общие
unsigned short us_find_st_input(char*, long long int, long long int);
int i_find_st_input(char*, long long int, long long int);
double d_find_st_input(char*, long double, long double);
double* castling(double*, unsigned short);
double* append(double*, double ,unsigned short);
int* castling_i(int*, unsigned short);

//Лаба 2
int** make_matrix(unsigned short, unsigned short);
int* converce_matrix(int**, unsigned short, unsigned short);
int* filter_by_digit(int*, unsigned short, unsigned short);

//Лаба 1
double* make_arr(unsigned short);
double* use_sin(double*, unsigned short);
double* clean_by_index(double*, unsigned short);
double find_average(double*, unsigned short);


#endif