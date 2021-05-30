#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		//for (int i = '0'; i < '10'; i++) 
			/*if (ch >= '0' && ch <= '9')
				ch = '*';*/
		
		if (ch >= 'a' && ch <= 'z')
			ch += 'A' - 'a';

		if (ch >= 'A' && ch <= 'Z')
			ch -= 'A' - 'a';

		putchar(ch);
	}

	

	return 0;

}