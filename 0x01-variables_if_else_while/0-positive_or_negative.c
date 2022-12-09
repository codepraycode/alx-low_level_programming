#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point to run program
 *
 * Return: 0 as a terminating indicator
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My code */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
