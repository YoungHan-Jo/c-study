#include <stdio.h>

int main()
{
	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	int* parr[2] = { arr0,arr1 };

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j)
			printf("%d(==%d, %d) ", parr[i][j], *(parr[i] + j), *(*(parr + i) + j));
	}

	printf("=======================================\n");

	int arr[2][3] = { { 1,2,3 }, { 4, 5, 6 } };
	parr[0] = arr[0];
	parr[1] = arr[1];

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j)
			printf("%d %d %d %d\n",
				arr[i][j], parr[i][j], *(parr[i] + j),*(*(parr + i) + j));
	}

	return 0;

}