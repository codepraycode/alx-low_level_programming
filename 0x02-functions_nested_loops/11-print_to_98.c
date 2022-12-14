#include "main.h"

/**
 * print_digits - Print digits correctly
 * @n: the number to print
 *
 * Return: void, prints out the outputs
 */
void print_digits(int n)
{

	int isNegative = n < 0 ? 1 : 0;

	if (isNegative)
	{
		_putchar('-');
		n *= -1;
	}

	if (n > 99)
	{
		int rem = n % 100;

		_putchar((n / 100) + '0');
		_putchar((rem / 10) + '0');
		_putchar((rem % 10) + '0');
	}
	else if ((n > 9))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
}

/**
 * print_to_98 - Print either to or fro to 98
 * @n: starting number
 *
 * Return: void, prints out the outputs
 */
void print_to_98(int n)
{

	for (;;)
	{

		print_digits(n);

		if (n > 98)
			n -= 1;
		else if (n < 98)
			n += 1;
		else
			break;

		_putchar(',');
		_putchar(' ');

	}
	_putchar('\n');
}
