#include "main.h"

/**
 * print_digits - Print digits correctly
 * @n: the number to print
 * @init: 1 or 0, checks if its the starting column
 * Return: void, prints out the outputs
 */
void print_digits(int n, int init)
{

	int isNegative = n < 0 ? 1 : 0;

	if (isNegative)
	{
		_putchar('-');
		n *= -1;
	}

	if (init)
	{
		_putchar('0');
	}

	else if (n > 99)
	{
		int rem = n % 100;

		_putchar(' ');
		_putchar((n / 100) + '0');
		_putchar((rem / 10) + '0');
		_putchar((rem % 10) + '0');
	}
	else if ((n > 9))
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
}

/**
 * print_times_table - prints n times time table starting from 0
 * @n: The number to stop in table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, col;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			int mul = row * col;

			int isInit = col == 0 ? 1 : 0;

			print_digits(mul, isInit);

			if (col < n)
				_putchar(',');

		}
		_putchar('\n');
	}
}
