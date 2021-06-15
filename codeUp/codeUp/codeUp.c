#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; ++i) {
		if (i == 1 || i == n) {
			for (int j = 1; j <= n; ++j)
				printf("*");
		}
		else {
			printf("*");
			for (int j = 1; j <= n - 2; ++j)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}


	return 0;
}