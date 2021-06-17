#include <stdio.h>

void swap(int* u, int* v);

int main()
{
	int a = 123;
	int b = 456;
	
	printf("%d %d\n", a, b);

	printf("%p %p\n", &a, &b);

	swap(&a, &b);

	printf("%d %d\n", a, b);

	return 0;
}

void swap(int* u, int* v) {

	printf("%p %p\n", u, v);

	int temp = *u;
	*u = *v;
	*v = temp;
}