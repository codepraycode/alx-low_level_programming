#include "main.h"

/**
 * print_last_digit - prints the last digit of an interger
 * @n: numeric value to operate on
 *
 * Return: int return value
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
