#include "Header_for_C.h"

int main()
{
	unsigned short x, y;
	x = us_find_st_input('x', 1, 60000);
	y = us_find_st_input('y', 1, 60000);

	int** matrix = make_matrix(x, y);
	int* arr = converce_matrix(matrix, x, y);
	printf("%d\n", *(0 + arr));
	for (int iter = 1; iter < arr[0]+1; iter++)
	{
		printf("%d ", *(iter + arr));
	}
}