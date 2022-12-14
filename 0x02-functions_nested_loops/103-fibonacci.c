#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	long int d, a, b;
	long unsigned int sum;

	a = 1;
	b = 2;

	for (;;)
	{
		d = a + b;

		a = b;
		b = d;

		if (d > 4000000)
			break;

		if ((d % 2) == 0)
			sum += d;
	}


	printf("%lu\n", sum);
	return (0);

}
