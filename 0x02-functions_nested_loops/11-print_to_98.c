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
		_putchar(n + '0');

		if (n > 98)
			n -= 1;
		else
			n += 1;
	} while (n != 98);
}
