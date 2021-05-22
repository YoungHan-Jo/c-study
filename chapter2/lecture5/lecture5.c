#include <stdio.h>

int main()
{
	int n1, n2, n3, n4;

	

	n1 = 2; // 2의 제곱씩 증가
	n2 = n1 * n1;
	n3 = n2 * n1;
	n4 = n2 * n1;// 문맥 오류는 컴파일러가 못잡음.

	return 0;

}