#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int number;
	scanf("%d", &number);

	const bool is_even = (number % 2 == 0) ? true : false;


	if (is_even)
		printf("Even");
	else
		printf("Odd");

	/*int number;
	scanf("%d", &number);

	const bool is_even = (number % 2 == 0) ? printf("Even") : printf("Odd");*/

	return 0;

}