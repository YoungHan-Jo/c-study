#include <stdio.h>


// 함수 만들기
void say_hello(void); // prototyping, function declaration

int main()
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;
	

	say_hello();

	return 0;

}

void say_hello(void) // function definition
{
	int x = 1;
	x = 10;
	printf("Hello, world!\n");
}