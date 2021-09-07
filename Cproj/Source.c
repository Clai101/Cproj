#include "Header_for_C.h"
#define newl '\n'
#define Tab '\t'

int main()
{
	unsigned short n;
	printf("Please, enter digit n, wich is belinged to [0, +65534]: ");
	scanf("%d", &n);
	float* main_arry = make_arr(n);
	main_arry = use_sin(main_arry, n);
	unsigned short max_negative_element = find_max_negative_element(main_arry, n);
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry + i));
	}
	printf("\n%d\n", max_negative_element);
	system("pause");
	return 0;
}
