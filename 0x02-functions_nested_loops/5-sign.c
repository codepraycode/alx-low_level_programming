#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 *
 * Return: int return value
 */
int print_sign(int n)
{
	char rtChar;
	int res;

	if (n > 0)
	{
		rtChar = '+';
		res = 1;
	}

	else if (n == 0)
	{
		rtChar = '0';
		res = 0;
	}

	else
	{
		rtChar = '-';
		res = -1;
	}

	_putchar(rtChar);
	return (res);
}
