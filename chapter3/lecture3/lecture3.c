#include <stdio.h>
#include <limits.h> // 자료형의 최고값 최소값

int main()
{

	unsigned int i = 0b11111111111111111111111111111111;
	unsigned int u = UINT_MAX; //Unsiged INT 의 max


	printf("%u\n", i); // %u = unsigend int 면 %u로 입력 -> %d로 입력하면 32비트 제일 첫 공간이 sign 이라서 마이너스로 출력됨
	printf("%u\n", u);

	return 0;

}