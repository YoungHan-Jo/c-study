#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);
	//	while (getchar() != '\n')
	//		continue;
	//	display(c, rows, cols);
	//	if (c == '\n')
	//		break;
	//}

	printf("Input one character and two integers : \n");
	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		while (getchar() != '\n')
			continue;

		display(c, rows, cols);
		printf("Input another character and two intergers :\n");
		printf("Press Enter to quit.\n");
	}

	return 0;

}

void display(char cr, int lines, int width)
{
	for (int r = 0; r < lines; ++r)
	{
		for (int c = 0; c < width; ++c)
			putchar(cr);
		putchar('\n');
	}
}