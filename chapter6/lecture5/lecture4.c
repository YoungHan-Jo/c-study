#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // fabs() �� �Լ� �� �� ����


int main()
{
	const double PI = 3.1415926535897932384626433832795;
	double guess = 0.0;

	printf("Input PI : ");
	scanf("%lf", &guess);
	// while (guess != PI)  // <- �Ǽ������� �̷��� �� �Ⱦ�. ���߱� �ʹ� ����⶧��
	while(fabs(guess - PI) > 0.01) // <- fabs() �� ���� �Լ�. �Ǽ������� �̷������� �ַ� ����� 0.00001 �� ���� ���е� up
	{
		printf("Fool! Try again. \n");
		scanf("%lf", &guess);
	}

	printf("Good!");

}