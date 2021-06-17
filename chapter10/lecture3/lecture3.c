#include <stdio.h>

int main()
{
	double arr[10];
	double* ptr1 = &arr[1];
	double* ptr2 = &arr[3];

	int i = ptr2 - ptr1;

	printf("%lld %lld %d", (long long)ptr1, (long long)ptr2, i);

	return 0;
}