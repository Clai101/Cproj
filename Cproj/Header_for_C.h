#ifndef HEADER_H_C
#define HEADER_H_C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

#define TERM_WORD "end"

//Universal
unsigned short us_find_st_input(char*, long long int, long long int); //проверяет на совпадение типов и придалежность промежутку для unsigned short
int i_find_st_input(char*, long long int, long long int); //проверяет на совпадение типов и придалежность промежутку для int
double d_find_st_input(char*, long double, long double); //проверяет на совпадение типов и придалежность промежутку для double
double* castling(double*, unsigned short); // убирает 1 элемент в массиве для double
int* castling_i(int*, unsigned short); // убирает 1 элемент в массиве для int
double* append(double*, double ,unsigned short); // добавляет элемент в конец массива
double** make_matrix(unsigned short, unsigned short); // создает матрицу colums X lines
double* make_arr(unsigned short); // создает массив длинной _long
unsigned short bin_search(unsigned short, double*, double); //Бинарная сортировка доработанная
char* st_find_st_input(char*); //Принятие строк


#endif