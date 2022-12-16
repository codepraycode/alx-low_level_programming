#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0-9
 *
 * Return: void (nothing)
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
