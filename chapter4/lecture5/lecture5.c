#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f // 기호적 상수 : 컴파일러가 컴파일 하기전에 알아서 다 바꾸고 컴파일 함
#define AI_NAME "Friday" // 대문자로 쓰는게 관습. // C는 전통적이라 define 을 이용하지만 C++ 혹은 다른 언어는 const 상수를 많이 사용함.

int main()
{
	float radius, area, circum;
	

	printf("I'm %s.\n",AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2.0f * PI * radius;

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;

}