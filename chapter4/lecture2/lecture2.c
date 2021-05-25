#define _CTR_SECURE_NO_WARNING
#include <stdio.h>

int main()
{
	int int_arr[30]; // 30개의 공간을 선언했기 때문에 배열 주소는 메모리 120바이트
	int* int_ptr = NULL; // 포인터는 아직 공간이 얼마나 있을지 모르기 때문에 포인터주소 이름을 저장할 공간 4바이트
	int_ptr = (int*)malloc(sizeof(int) * 30);

	printf("Size of array = %zu bytes\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

	return 0; 

}