#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)	// end of file
		putchar(c);					// ctrl + z ������ ������ �� ����


	return 0;

}