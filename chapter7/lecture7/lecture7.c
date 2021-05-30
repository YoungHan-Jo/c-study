#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h> // islower()
#include <stdbool.h>
#include <iso646.h> // and, or, not

#define PERIOD '.'

int main()
{
	char ch;
	int count = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '\n' && ch != ' ')
			count++;
	}

	printf("%d", count);

	

	return 0;

}