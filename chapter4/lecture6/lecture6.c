#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	double d = 3.14159230425034860349582039540239572039845203948203948;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in the room to try.\n"); //백슬래쉬 넣고 빈칸 없으면 연결됨.

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);
	printf("%u %u %u\n", 1024, -1, UINT_MAX);

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d); // printf 할때는 double값을 넣어도 %lf 할 필요없이 그냥 %f 해도됨, but scanf 할때는 %lf
	printf("%a %A\n", d, d); // P p 로 출력
	printf("%e %E\n", d, d); //e E 로 출력

	printf("\n"); //G,g 는 알아서 맞춰서 출력해줌
	printf("%g %g\n", 123456.789, 1234567.89);
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n", 9); // 8진수
	printf("%p\n", &d); // 포인터

	printf("\n");
	printf("%x %x\n", 11,11); // 16진수
	printf("%%\n", d); // %%는 % 출력, //d 는 무시됨

	printf("\n");
	printf("%9d\n", 12345); // 9칸 확보해서 입력하고 나머지는 빈칸
	printf("%09d\n", 12345); // 9칸 확보해서 입력하고 나머지는 0으로 채움

	return 0;

}