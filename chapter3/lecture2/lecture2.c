#include <stdio.h>

int main()
{
	float won = 0.0f; // f�� ���ͷ�
	float dollar = 0.0f;

	printf("Input Won\n");
	scanf("%f", &won);

	dollar = won * 0.00089f; // f�� ���ͷ�
	
	printf("Dollar = %f", dollar);

	return 0;

}