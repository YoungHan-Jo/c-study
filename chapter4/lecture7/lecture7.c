#include <stdio.h>

int main()
{
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123,-123);
	printf("% i\n% i\n", 123, -123);
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);

	return 0;

}