#include "Header_for_C.h"

int main()
{
	//Пункт 1
	unsigned short n;
	n = find_st_short('n');
	float* main_arry_1 = make_arr(n+1);
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
	float* main_arry_2 = castling(main_arry_1, n);

	printf("Part two answer:\n");
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry_2 + i));
	}
	printf("\n\n");

	//Пункт 3
	float avarege = find_average(main_arry_2, n);

	printf("Part three answer:\n");
	printf("%f\n\n", avarege);

	system("pause");
	return 0;
}