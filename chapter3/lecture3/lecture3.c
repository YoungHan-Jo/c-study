#include <stdio.h>
#include <limits.h> // �ڷ����� �ְ� �ּҰ�

int main()
{

	unsigned int i = 0b11111111111111111111111111111111;
	unsigned int u = UINT_MAX; //Unsiged INT �� max


	printf("%u\n", i); // %u = unsigend int �� %u�� �Է� -> %d�� �Է��ϸ� 32��Ʈ ���� ù ������ sign �̶� ���̳ʽ��� ��µ�
	printf("%u\n", u);

	return 0;

}