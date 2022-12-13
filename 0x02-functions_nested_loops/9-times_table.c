#include "main.h"

/**
 * times_table - prints 9 times time table starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int mul = row * col;

			if (col > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}

			_putchar(mul + '0');

			if (col < 9)
				_putchar(',');

		}
	}
}
