
#include <stdio.h>

extern int sum_squar(int** a , int num );

int main(void)
{	
	int x[][5] = { {2,2,2,4,5}, {2,2,2,4,5}, {2,2,2,4,5} }; // Сумма квадратов 159
	int **ptr = (int**)x;

	int num = 15;

	printf("sum squares = %d\n", sum_squar(ptr, num));

	return 0;
}




























// #include <stdio.h>

// int sum_quad(int* ptr_arr, int num);
// // int sum_quad (int (*ptr_arr)[5], int n1, int n2 )
// // {
// // 	int res = 0;
// // 	for (int i = 0; i < n1; ++i)
// // 	{
// // 		for (int j = 0; j < n2; ++j)
// // 		{
// // 			res += ptr_arr[i][j] * ptr_arr[i][j];
// // 		}
// // 	}
// // 	return res;
// // }


// int main(void)
// {

// 	// int array[5][5] ={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
// 	int array[] = {2,2,2,2,2};

// 	// int arr[] = {1,2,3,4};
// 	// printf("%d\n",0[arr]);

// 	int sum = sum_quad(array, 5);

// 	printf("%d\n", sum );


// 	return 0;
// }