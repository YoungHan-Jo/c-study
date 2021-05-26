#include <stdio.h>

int main()
{
	float	n1 = 3.14;	// 4 bytes
	double	n2 = 1.234;	// 8 bytes
	int		n3 = 1024;	// 4 bytes

	printf("%f %f %d\n\n", n1, n2, n3);		// 8, 8, 4


	printf("%d %d %d\n\n", n1, n2, n3);		// 4, 4, 4	전부 오류
	printf("%lld %lld %d\n\n", n1, n2, n3);	// 8, 8, 4	but 1,2번타입이 달라서 오류
	printf("%f %d %d\n\n", n1, n2, n3);		// 8, 4, 4	2번이 크기가 달라서 뒤로 다 밀림
	printf("%f %lld %d\n\n", n1, n2, n3);	// 8, 8, 4	but 2번 타입이 다름



	return 0;

}