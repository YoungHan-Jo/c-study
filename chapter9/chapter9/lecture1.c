#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 30
#define NAME "YoungHan Jo"
#define ADDRESS "Busan, Korea"

void showStar(int n_stars);
void print_blank();
void print_profile(char str[]);

int main()
{
	showStar(WIDTH);

	print_profile(NAME);
	print_profile(ADDRESS);

	showStar(WIDTH);


	return 0;

}

void showStar(int n_stars) {

	for (int i = 0; i < n_stars; ++i)
		printf("*");
	printf("\n");
}
void print_blank() {
	for (int i = 0; i < WIDTH / 2 - 6; ++i)
		printf(" ");
}
void print_profile(char str[]) {
	print_blank();
	printf("%s\n", str);
}