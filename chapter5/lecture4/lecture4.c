#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double seed_money , target_money, annual_interest ;

	printf("Input seed money : ");
	scanf("%lf", &seed_money);

	printf("Input target money : ");
	scanf("%lf", &target_money);

	printf("Input annual interest (%%) : ");
	scanf("%lf", &annual_interest);


	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money) 
	{
		fund += fund * annual_interest / 100;
		year_count++;

		printf("Year %d, fund %lf\n", year_count, fund);
	}

	printf("It takes %d yesrs\n", year_count);











	/*for (int i = 1; i <= 100; i++) {
		seed_money = seed_money*(100+annual_interest)/100;
		printf("%f\n", seed_money);
		if (seed_money >= target_money) {
			printf("It takes %d years", i);
			break;
		}
	}*/


	return 0;

}