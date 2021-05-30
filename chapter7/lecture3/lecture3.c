#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		//for (int i = '0'; i < '10'; i++) 
			/*if (ch >= '0' && ch <= '9')
				ch = '*';*/

		if (islower(ch))
			ch = toupper(ch);

		else if (isupper(ch))
			ch = tolower(ch);

		putchar(ch);
	}

	return 0;

}