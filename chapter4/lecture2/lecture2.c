#define _CTR_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int int_arr[30]; // 30���� ������ �����߱� ������ �迭 �ּҴ� �޸� 120����Ʈ
	int* int_ptr = NULL; // �����ʹ� ���� ������ �󸶳� ������ �𸣱� ������ �������ּ� �̸��� ������ ���� 4����Ʈ
	int_ptr = (int*)malloc(sizeof(int) * 30);

	printf("Size of array = %zu bytes\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

	return 0; 

}