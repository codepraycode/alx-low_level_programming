#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point for program
 *
 * Return: 0 as a terminator of the program
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	printf("Last digit of %d is ", n);
	ld = (signed int) n % 10;

	printf("%d ", ld);

	if (ld > 5)
		printf("and is greater than 5");
	if (ld == 0)
		printf("and is 0");
	if (ld < 6)
		printf("and is less than 6 and not 0");
	printf("\n");


	return (0);
}
