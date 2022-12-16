#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0-14 10 times
 *
 * Return: void (nothing)
 */
void more_numbers(void)
{
	int c, j;

	for (c = 0; c <= 9; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			int rm = j > 9 ? (j / 10) : 0;
			int ans = (j % 10);

			if (rm)
				_putchar(rm + '0');
			_putchar(ans + '0');
		}

		_putchar('\n');
	}
}
