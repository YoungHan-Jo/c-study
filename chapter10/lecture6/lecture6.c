#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main()
{
	double year2018[MONTHS] = { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6};
	double year2019[MONTHS] = { -0.9,1.0,7.1,12.1,19.4,22.5,25.9,27.2,22.6,16.4,8.6,1.4 };
	double year2020[MONTHS] = { 1.6,2.5,7.7,11.1,18.0,23.9,24.1,26.5,21.4,14.3,8.0,-0.4};

	double temp[YEARS][MONTHS] = { {-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6},
									{-0.9, 1.0, 7.1, 12.1, 19.4, 22.5, 25.9, 27.2, 22.6, 16.4, 8.6, 1.4 },
									{1.6, 2.5, 7.7, 11.1, 18.0, 23.9, 24.1, 26.5, 21.4, 14.3, 8.0, -0.4}};
	printf("[Temperature Data]\n");
	printf("Year index :\t");
	for (int i = 1; i <= MONTHS; ++i)
		printf("%d\t",i);
	printf("\n");

	for (int i = 0; i < YEARS; ++i) {
		printf("Year %d     :\t", i);
		for (int j = 0; j < MONTHS; ++j)
			printf("%.1f\t", temp[i][j]);
		printf("\n");
	}

	printf("[Yearly average temperatures of 3 years]\n");
	for (int y = 0; y < YEARS; ++y) {
		double sum_temp = 0.0;
		for (int m = 0; m < MONTHS; ++m)
			sum_temp += temp[y][m];
		double avg_temp = sum_temp / MONTHS;
		printf("Year %d : average temperature = %.1f\n", y, avg_temp);
	}

	printf("\n[Monthly average temperatures for 3 years]\n");
	printf("Year index :");
	for (int i = 1; i <= MONTHS; ++i)
		printf("\t%d", i);
	printf("\nAvg temps  :");
	for (int m = 0; m < MONTHS; ++m) {
		double sum_temp = 0.0;
		for (int y = 0; y < YEARS; ++y)
			sum_temp += temp[y][m];
		double avg_temp = sum_temp / YEARS;
		printf("\t%.1f", avg_temp);
	}
	

	/*double sumY[YEARS] = { 0 };
	double avgY[YEARS] = { 0 };

	for (int i = 0; i < YEARS; ++i) {
		for (int j = 0; j < MONTHS; ++j)
			sumY[i] += temp[i][j];
		avgY[i] = sumY[i] / 12.0;
	}

	printf("\n[Yearly average temperatures of 3 years]\n");
	
	for (int i = 0; i < YEARS; ++i)
		printf("Year %d : average temperature = %.1f\n", i, avgY[i]);

	printf("\n[Monthly average temperatures for 3 years]\n");
	printf("Year index :\t");
	for (int i = 1; i <= MONTHS; ++i)
		printf("%d\t", i);
	printf("\nAvg temps  :\t");

	double sum[MONTHS] = { 0 };
	double avg[MONTHS] = { 0 };

	for (int i = 0; i < MONTHS; ++i) {
		for (int j = 0; j < YEARS; ++j)
			sum[i] += temp[j][i];
		avg[i] = sum[i] / 3.0;
	}
	
	for (int i = 0; i < MONTHS; ++i)
		printf("%.1f\t", avg[i]);*/


	return 0;
}