#include <stdio.h>
//#include <stdint.h>
#include <inttypes.h> // ���⿡ stdint.h �� ���� �Ǿ��־ �̰� �ϳ��� �ص� ��.


int main()
{
	int i;				// ���� �ʺ� ����
	int32_t i32;		// 32 bit integer
	int_least8_t i8;	// smallest 8bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integers
	uintmax_t uimax;	// biggest unsigned integers


	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);		// ���ڿ��� 3�������� �ɰ�
	printf("me32 = \%" PRId32 "\n", i32);	// ���������� �� ������� �ָ��ϴϱ� �׳� PRI d 32 ��ũ�� ����ϸ� ��
											// ��Ƽ �÷��� �Ҷ� ���� �����
	

	return 0;

}