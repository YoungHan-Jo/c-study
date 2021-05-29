#include <stdio.h>

int main()
{
	char FIRST_CHAR = 'A';
	char LAST_CHAR = 'L';
	int NUM_ROWS = LAST_CHAR - FIRST_CHAR + 1;

	/*for (int r = 0; r < 5; r++) {
		for (int c = FIRST_CHAR; c <= LAST_CHAR; c++)
			printf("%c ", c);
		printf("\n");
	}*/

	/*for (int r = 0; r < 10; r++) {
		for (int c = FIRST_CHAR; c <= FIRST_CHAR+r; c++)
			printf("%c ", c);
		printf("\n");
	}*/
	
	for (int r = 0; r < NUM_ROWS; ++r) {
		for (int c = FIRST_CHAR + r; c < FIRST_CHAR + NUM_ROWS; ++c)
			printf("%c ", c);
		printf("\n");
	}


	return 0;

}