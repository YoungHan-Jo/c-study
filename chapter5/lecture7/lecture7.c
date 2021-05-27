#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hours = 0, minutes = 0, seconds = 0;

	printf("Input seconds : ");
	scanf("%d", &seconds);

	while (seconds >= 0)
	{
		
		
		minutes = seconds / 60;
		seconds %= 60;

		hours = minutes / 60;
		minutes %= 60;



		/*hours = seconds / 3600;
		minutes = (seconds - hours * 3600) / 60;
		seconds = seconds % 60;*/


		printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
		

		printf("Input seconds : ");
		scanf("%d", &seconds);
	}

	printf("Good bye\n");

	return 0;

}