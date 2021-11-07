#ifndef HEADER_H_C
#define HEADER_H_C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

//�����
unsigned short us_find_st_input(char*, long long int, long long int); //��������� �� ���������� ����� � ������������� ���������� ��� unsigned short
int i_find_st_input(char*, long long int, long long int); //��������� �� ���������� ����� � ������������� ���������� ��� int
double d_find_st_input(char*, long double, long double); //��������� �� ���������� ����� � ������������� ���������� ��� double
double* castling(double*, unsigned short); // ������� 1 ������� � ������� ��� double
int* castling_i(int*, unsigned short); // ������� 1 ������� � ������� ��� int
double* append(double*, double ,unsigned short); // ��������� ������� � ����� �������
double** make_matrix(unsigned short, unsigned short); // ������� ������� colums X lines
double* make_arr(unsigned short); // ������� ������ ������� _long

//func_dir_3
double deviding_and_difference(double, double, double, double);
double find_max_min(unsigned short, unsigned short, double**);
unsigned short bin_search(unsigned short, double*, double);
double* add_to_set(unsigned short, double*, double);
double* func_3(unsigned short, double*, double*);

#endif