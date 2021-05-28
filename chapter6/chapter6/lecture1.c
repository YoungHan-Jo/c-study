#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	// int status;

	printf("Enter an integer (q to quit) : ");

	// status = scanf("%d",&num);

	while (scanf("%d", &num) == 1) {
		sum += num;

		printf("Enter next integer (q to quit) : ");
		// status = scanf("%d",&num);	
	}

	printf("Sum = %d\n", sum);

	return 0;

}