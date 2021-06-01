#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
	long number;
	printf("Please input an integer and press enter.\n");

	while(1)
	{
	number = get_long();

	if (number <= 100) {
		break;
	}
	else 
		printf("Please try again.\n");
	}

	printf("Your integer is %ld.\n", number);
		
	



	return 0;

}

long get_long(void) {
	

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		while ((c = getchar()) != '\n')
			putchar(c);

		printf(" - is not and integer. Please try again\n");
	}

	printf("Your input %ld is an integer. Thank you. \n", input);

	return input;
}