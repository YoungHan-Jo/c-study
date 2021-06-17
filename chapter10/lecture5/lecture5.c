#include <stdio.h>

int main()
{
	
	int arr[2][3] = { {1,2,3},
			        	{4,5,6} };

	printf("%d\n\n", arr[1][1]);

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
			printf("%d ", arr[i][j]);
	}

	printf("\n");

	int* ptr = arr;
	for (int i = 0; i < 6; ++i)
		printf("%d ", *(ptr+i));

	printf("\n\n");

	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));





	return 0;
}