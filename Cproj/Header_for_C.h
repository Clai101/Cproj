#ifndef HEADER_H_C
#define HEADER_H_C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>

unsigned short find_st_short(char name_of_value);
float* make_arr(unsigned short n);
float* use_sin(float* main_arry, unsigned short n);
unsigned short find_max_negative_element(float* main_arry, unsigned short n);
float* clean_by_index(float* main_arry, unsigned short n);
float* castling(float* main_arry, unsigned short n);
float find_average(float* main_arry, unsigned short n);

#endif
