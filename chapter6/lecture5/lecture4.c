#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // fabs() 이 함수 쓸 수 있음


int main()
{
	const double PI = 3.1415926535897932384626433832795;
	double guess = 0.0;

	printf("Input PI : ");
	scanf("%lf", &guess);
	// while (guess != PI)  // <- 실수에서는 이렇게 잘 안씀. 맞추기 너무 힘들기때문
	while(fabs(guess - PI) > 0.01) // <- fabs() 는 절댓값 함수. 실수에서는 이런식으로 주로 사용함 0.00001 할 수록 정밀도 up
	{
		printf("Fool! Try again. \n");
		scanf("%lf", &guess);
	}

	printf("Good!");

}