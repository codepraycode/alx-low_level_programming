#include <stdio.h>
#include "main.h"

/**
 * print_number - entry point for the program to print numbers
 * @n: interger to print
 *
 * Return: 0 as a terminator
 */
void print_number(int n)
{
	int unit = n;

	if (n == 0)
		_putchar(0 + '0');

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		unit *= -1;
	}

	while (unit > 0)
	{
		if (unit > 9999)
		{
			_putchar((n / 10000) + '0');
			unit = 1000;
		}
		else if (unit > 999)
		{
			_putchar(((n % 10000) / 1000) + '0');
			unit = 100;
		}

		else if (unit > 99)
		{
			_putchar(((n % 1000) / 100) + '0');
			unit = 10;
		}

		else if (unit > 9)
		{
			_putchar(((n % 100) / 10) + '0');
			unit = 1;
		}
		else
		{

			_putchar((n % 10) + '0');
			unit = 0;
		}
	}
}
