#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	double d = 3.14159230425034860349582039540239572039845203948203948;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in the room to try.\n"); //�齽���� �ְ� ��ĭ ������ �����.

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);
	printf("%u %u %u\n", 1024, -1, UINT_MAX);

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d); // printf �Ҷ��� double���� �־ %lf �� �ʿ���� �׳� %f �ص���, but scanf �Ҷ��� %lf
	printf("%a %A\n", d, d); // P p �� ���
	printf("%e %E\n", d, d); //e E �� ���

	printf("\n"); //G,g �� �˾Ƽ� ���缭 �������
	printf("%g %g\n", 123456.789, 1234567.89);
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n", 9); // 8����
	printf("%p\n", &d); // ������

	printf("\n");
	printf("%x %x\n", 11,11); // 16����
	printf("%%\n", d); // %%�� % ���, //d �� ���õ�

	printf("\n");
	printf("%9d\n", 12345); // 9ĭ Ȯ���ؼ� �Է��ϰ� �������� ��ĭ
	printf("%09d\n", 12345); // 9ĭ Ȯ���ؼ� �Է��ϰ� �������� 0���� ä��

	return 0;

}