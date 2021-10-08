#include "Header_for_C.h"

int main2()
{
	//Пункт 1
	printf("Laboratory work 1 was made by Karibdzhanov Matvei. Variant 148.\n");
	unsigned short n;
	n = us_find_st_input('n', 0, 65530);
	double* main_arry_1 = make_arr(n+1);
	main_arry_1 = use_sin(main_arry_1, n);
	printf("\n");
	printf("Part one answer:\n");
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry_1 + i));
	}
	printf("\n\n");
	
	//Пункт 2
	main_arry_1 = clean_by_index(main_arry_1, n);
	n = *(main_arry_1);
	double* main_arry_2 = castling(main_arry_1, n);

	printf("Part two answer:\n");
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry_2 + i));
	}
	printf("\n\n");

	//Пункт 3
	double avarege = find_average(main_arry_2, n);

	printf("Part three answer:\n");
	printf("Average is equal %f\n\n", avarege);

	system("pause");
	return 0;
}