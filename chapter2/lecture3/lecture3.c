/*
 * Written by Y.H. Jo
 */

#include <stdio.h>

int main(void) {


	// print formatted ����Ʈ ������ ����� �ٿ��� printf
	printf("\"The truth is ... \nI am Ironman.\"\n"); // back slash \n �����͵� : secape sequence

	int x, y, sum; // �̸� �ٲܰ� �巡�� �ؼ� ������Ŭ�� rename �ϸ� ���ÿ� ���� �� �ٲ� �� ����

	x = 1;
	y = 4;

	sum = x + y;

	printf("%i + %i = %i", x,y,sum ); // %d : 10���� , %i : integer ��
	printf("\a"); // \a : ����� , �̷��͵� ��� ����


	// �ּ� ����� - �ּ� ������ �巡�� �� ctrl + K + C // �ּ� Ǯ�� ctrl + k + u

	return 0;
}