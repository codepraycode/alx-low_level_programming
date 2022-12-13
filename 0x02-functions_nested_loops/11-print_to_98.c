#include "main.h"

/**
 * print_to_98 - Print either to or fro to 98
 * @n: starting number
 *
 * Return: void, prints out the outputs
 */
void print_to_98(int n)
{
	do {
		_putchar(' ');

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

		if (n != 98)
			_putchar(',');

		if (n > 98)
			n -= 1;
		else
			n += 1;
	} while ((n > 98) || (n < 98));
}
