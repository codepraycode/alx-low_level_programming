#include "main.h"

/**
 * print_line - Draw a straigth line in terminal
 * @n: length of line
 *
 * Return: void (nothing)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
