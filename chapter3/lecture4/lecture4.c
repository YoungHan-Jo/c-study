#include <stdio.h>
//#include <stdint.h>
#include <inttypes.h> // 여기에 stdint.h 도 포함 되어있어서 이거 하나만 해도 됨.


int main()
{
	int i;				// 고정 너비 정수
	int32_t i32;		// 32 bit integer
	int_least8_t i8;	// smallest 8bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integers
	uintmax_t uimax;	// biggest unsigned integers


	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);		// 문자열로 3구간으로 쪼갬
	printf("me32 = \%" PRId32 "\n", i32);	// 형식지정자 뭘 써야할지 애매하니까 그냥 PRI d 32 매크로 사용하면 됨
											// 멀티 플랫폼 할때 자주 사용함
	

	return 0;

}