#include "Header_for_C.h"
#define newl '\n'
#define Tab '\t'


int main()
{
	unsigned short n;
	scanf("%d", &n);
	float* main_arry = make_arr(n);
	for (int i = 0; i != n; i++)
	{
		printf("%.0f \t", *(main_arry + i));
	}
	system("pause");
	return 0;
}
