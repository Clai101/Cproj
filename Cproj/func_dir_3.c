#include "Header_for_C.h"


//1 часть
double deviding_and_difference(double minuend, double dividend_1, double dividend_2, double divider)
{
	return minuend - ((dividend_1 * dividend_2) / divider);
}


//2 часть
double find_max_min(unsigned short colums, unsigned short lines, double** matrix)
{
    double time_min_value = 0;
    for (int colum = 0; colum < colums; colum++)
    {
        double time_max_value = matrix[0][colum];
        for (int line = 1; line < lines; line++)
        {
            if (fabs(time_max_value) < fabs(matrix[line][colum]))
            {
                time_max_value = matrix[line][colum];
            }
        }
        if (colum != 0)
        {
            if (time_max_value < time_min_value)
            {
                time_min_value = time_max_value;
            }
        }
        else
        {
            time_min_value = time_max_value;
        }
    }
    return time_min_value;
}


//3 часть
unsigned short bin_search(unsigned short _long, double* arry, double new_element)
{
    unsigned short down_border = 1, up_border = _long+1, point, last_point = 65333;
    while (true)
    {
        point = (down_border + up_border) / 2;
        if (arry[point] == new_element)
            return 0;
        if (point == last_point)
        {
            if (arry[point] > new_element)
                return point;
            else
                return point + 1;
        }
        if (arry[point] > new_element)
        {
            up_border = point;
            last_point = point;
            continue;
        }
        if (arry[point] < new_element)
        {
            down_border = point;
            last_point = point;
            continue;
        }
    }
}

double* add_to_set(unsigned short _long, double* arry, double new_element)
{
    unsigned short index = bin_search(_long, arry, new_element);
    if (index == 0)
        return arry;
    double* new_arry = make_arr(_long + 1);
    _long++;
    new_arry[0] = (double)_long;
    unsigned short i = 1;
    for (i; i < index; i++)
        new_arry[i] = arry[i];
    new_arry[i] = new_element;
    i++;
    for (i; i < _long+1; i++)
        new_arry[i] = arry[i-1];
    return new_arry;
}
