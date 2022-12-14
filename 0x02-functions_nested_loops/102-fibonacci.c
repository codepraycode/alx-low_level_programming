#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int a, b, c;

	a = 1;
	b = 2;

	c = 2;

	printf("%d, %d, ", a, b);

	do {
		int d = a + b;

		a = b;
		b = d;


		if (c < 50)
			printf("%d, ", d);

		c += 1;

	} while (c < 50);


	printf("\n");
	return (0);

}
