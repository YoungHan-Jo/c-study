#include <stdio.h>

void swap(int* u, int* v);


int main()
{
	int a = 123;
	int b = 456;

	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;

}

void swap(int* u, int* v) {
	int temp = *u;
	*u = *v;
	*v = temp;
}