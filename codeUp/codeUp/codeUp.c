#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a, b;
	char c;

	scanf("%d%c%d",&a, &c, &b);

	switch (c)
	{
	case '+':
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '*':
		printf("%d", a * b);
		break;
	case '/':
		printf("%.2f", (float)a / b);
		break;
	}

	return 0;
}