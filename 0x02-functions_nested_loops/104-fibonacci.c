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


		printf("%lu", d);

		if (c < 97)
			printf(", ");

		c += 1;

	} while (c < 98);


	printf("\n");
	return (0);

}
