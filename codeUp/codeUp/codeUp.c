#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int count = 0;

	scanf("%d", &n);

	for (int i = 1; i <= 1000000000; i *= 10) {
		if (n / i == 0)
			break;
		else
			count++;
	}

	printf("%d", count);

	return 0;
}
