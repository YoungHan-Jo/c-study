#include <stdio.h>

int main()
{
	int i = 0, j = 0; // ���� �ʱ�ȭ �ϴ� ����
	int sum = 0; // ����� ������ �� ������ �� �ʱ�ȭ �����ֱ�

	printf("Input two integers > ");

	scanf("%d%d", &i, &j);

	printf("i = %d , j = %d \n", i,j);

	sum = i + j;

	printf("%d plus %d = %d", i, j, sum);

	return 0;

}