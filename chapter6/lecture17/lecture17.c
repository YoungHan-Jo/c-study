#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 6

int main()
{
	//int my_arr[SIZE];

	//for(int i = 0; i < SIZE; i++)
	//{
	//	my_arr[i] = i;
	//	1 + 3;// dummy ,debug 찍어볼때 있으면 편함.
	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	printf("%d ", my_arr[i]);
	//}

	int arr[SIZE];
	int sum = 0;
	int i;

	printf("Enter %d numbers : ", SIZE);

	for (i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < SIZE; i++)
		sum += arr[i];
	

	printf("Sum = %d", sum);



	return 0;

}