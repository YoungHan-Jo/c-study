#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f // ��ȣ�� ��� : �����Ϸ��� ������ �ϱ����� �˾Ƽ� �� �ٲٰ� ������ ��
#define AI_NAME "Friday" // �빮�ڷ� ���°� ����. // C�� �������̶� define �� �̿������� C++ Ȥ�� �ٸ� ���� const ����� ���� �����.

int main()
{
	float radius, area, circum;
	

	printf("I'm %s.\n",AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0f * PI * radius;

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;

}