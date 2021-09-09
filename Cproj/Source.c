#include "Header_for_C.h"
#define newl '\n'
#define Tab '\t'


int main()
{
	unsigned short n;
	n = find_st_short('n');
	float* main_arry_1 = make_arr(n+1);
	main_arry_1 = use_sin(main_arry_1, n);
	
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry_1 + i));
	}
	printf("\n");
	
	main_arry_1 = clean_by_index(main_arry_1, n);
	n = *(main_arry_1);
	float* main_arry_2 = castling(main_arry_1, n);

	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry_2 + i));
	}

	float avarege = find_average(main_arry_2, n);

	printf("%f\n", avarege);
	system("pause");
	return 0;
}
