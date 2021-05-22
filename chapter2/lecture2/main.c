#include <stdio.h> // 전처리기 : 컴파일 하기전에 라이브러리 등을 포함시키는거

int main(void)
{
	int x; // declaration : 자료형 int 인 x의 공간을 메모리에 확보했다고 선언
	int y; // 밑에서 int y; 를 또 선언 할수 업는 이유 - > 이미 메모리에 확보 했는데 같은 이름으로 또 확보해라하니까 안됨
	int z;

	x = 1; // assignment
	y = 2;

	z = x + y;

	return 0; // 값을 반환 : main 함수의 기능들을 다 수행하고 컴퓨터에게 값을 반환시킴

}