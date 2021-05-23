#include <stdio.h>

int main()
{
	int i = 0, j = 0; // 변수 초기화 하는 습관
	int sum = 0; // 사용할 변수는 맨 위에서 다 초기화 시켜주기

	printf("Input two integers > ");

	scanf("%d%d", &i, &j);

	printf("i = %d , j = %d \n", i,j);

	sum = i + j;

	printf("%d plus %d = %d", i, j, sum);

	return 0;

}