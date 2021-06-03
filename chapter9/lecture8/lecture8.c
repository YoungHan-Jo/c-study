#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
	int num = 5;

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));

	return 0;

}

long loop_factorial(int n)
{
	long f = 1;

	for (int i = n; i > 0; --i)
		f *= (long)i;
	
	return f;
}

long recursive_factorial(int n)
{

	if (n > 0)
	{
		return n * recursive_factorial(n - 1);
	}
	else
		return 1;
}