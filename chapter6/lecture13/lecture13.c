#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int secret_code = 337;
	
	int guess = 0;

	do {
		printf("Enter secret code : ");
		scanf("%d", &guess);

	} while (guess != secret_code);

	printf("Good!");

	return 0;

}