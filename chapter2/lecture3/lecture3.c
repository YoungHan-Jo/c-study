/*
 * Written by Y.H. Jo
 */

#include <stdio.h>

int main(void) {


	// print formatted 프린트 형식을 맞춘다 줄여서 printf
	printf("\"The truth is ... \nI am Ironman.\"\n"); // back slash \n 같은것들 : secape sequence

	int x, y, sum; // 이름 바꿀곳 드래그 해서 오른쪽클릭 rename 하면 동시에 전부 다 바꿀 수 있음

	x = 1;
	y = 4;

	sum = x + y;

	printf("%i + %i = %i", x,y,sum ); // %d : 10진수 , %i : integer 값
	printf("\a"); // \a : 경고음 , 이런것도 출력 가능


	// 주석 단축기 - 주석 묶을때 드래그 후 ctrl + K + C // 주석 풀때 ctrl + k + u

	return 0;
}