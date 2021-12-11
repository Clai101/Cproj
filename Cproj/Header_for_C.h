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
unsigned short us_find_st_input(char*, long long int, long long int); //��������� �� ���������� ����� � ������������� ���������� ��� unsigned short
int i_find_st_input(char*, long long int, long long int); //��������� �� ���������� ����� � ������������� ���������� ��� int
double d_find_st_input(char*, long double, long double); //��������� �� ���������� ����� � ������������� ���������� ��� double
double* castling(double*, unsigned short); // ������� 1 ������� � ������� ��� double
int* castling_i(int*, unsigned short); // ������� 1 ������� � ������� ��� int
double* append(double*, double ,unsigned short); // ��������� ������� � ����� �������
double** make_matrix(unsigned short, unsigned short); // ������� ������� colums X lines
double* make_arr(unsigned short); // ������� ������ ������� _long
unsigned short bin_search(unsigned short, double*, double); //�������� ���������� ������������
char* st_find_st_input(char*); //�������� �����


#endif