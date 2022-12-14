#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	long int a, b, d;
	int c;

	a = 1;
	b = 2;

	c = 2;

	printf("%lu, %lu, ", a, b);

	do {
		d = a + b;

		a = b;
		b = d;


		if (c < 50)
			printf("%lu, ", d);

		c += 1;

	} while (c < 50);


	printf("\n");
	return (0);

}
