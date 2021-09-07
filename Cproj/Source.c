#include "Header_for_C.h"
#define newl '\n'
#define Tab '\t'

int main()
{
	unsigned short n;
	n = find_st_short('n');
	float* main_arry = make_arr(n);
	main_arry = use_sin(main_arry, n);
	unsigned short index_of_max_negative_element = find_max_negative_element(main_arry, n);
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry + i));
	}
	printf("\n%d\n", index_of_max_negative_element);
	system("pause");
	return 0;
}
