#include <stdio.h>

int main()
{
	float won = 0.0f; // f형 리터럴
	float dollar = 0.0f;

	printf("Input Won\n");
	scanf("%f", &won);

	dollar = won * 0.00089f; // f형 리터럴
	
	printf("Dollar = %f", dollar);

	return 0;

}