#include "Header_for_C.h"
#define newl '\n'
#define Tab '\t'


int main()
{
	unsigned short n;
	printf("Please, enter n: ");
	scanf("%d", &n);
	float* main_arry = make_arr(n);
	main_arry = use_sin(main_arry, n);
	for (int i = 0; i != n; i++)
	{
		printf("%f  ", *(main_arry + i));
	}
	system("pause");
	return 0;
}
