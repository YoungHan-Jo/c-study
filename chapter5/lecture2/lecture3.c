#include <stdio.h>

int main()
{
	printf("%d\n", 1 + 2);

	int income, salary, bonus;

	income = salary = bonus = 100; // triple assignment

	salary = 100;
	bonus = 30;

	income = salary + bonus; // l-value vs r-value

	int a, b;
	a = -7; // ���⼭ -7�̶�� ���� ���� �ƴϰ� -�� ��ȣ������
	b = -a;
	b = +a;

	1.0f + 2;

	return 0;

}