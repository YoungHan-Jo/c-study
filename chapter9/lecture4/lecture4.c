#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int main()
{
	int a;

	a = int_max(1, 2);

	printf("%d\n", a);
	printf("%p\n", &a);

	{
		int a;
		a = int_max(4, 5);
		printf("%d\n", a);
		printf("%p\n", &a);

	}

	printf("%d\n", a);
	printf("%p\n", &a);


	return 0;

}

int int_max(int i, int j) {
	return i > j ? i : j;
}