#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int a[] = {0};

	scanf("%d", &n);

	int count = n;

	for (int i = 0; i < count; ++i) {
		scanf("%d", &a[i]);
	}

	return 0;
}