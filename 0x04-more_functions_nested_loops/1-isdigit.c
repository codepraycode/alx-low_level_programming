#include <stdio.h>

/**
 * _isdigit - entry point for the program to check for digit 0 - 9
 * @c: input to check
 *
 * Return: 0 is false and 1 if true
 */
int _isdigit(int c)
{

	if ((c >= '0' ) && (c <= '9'))
		return (1);

	return (0);
}
