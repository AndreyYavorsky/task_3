#include <cstdio>

extern "C"{
	extern int sum_squar(int** a , int num );
}


int main(void)
{	
	int x[][5] = { {2,2,2,4,5}, {2,2,2,4,5}, {2,2,2,4,5} }; // Сумма квадратов 159
	int **ptr = (int**)x;

	int num = 15;

    printf("sum squares = %d\n", sum_squar(ptr, num));

    return 0;
}
