#include <stdio.h>

/**
 * _isupper - entry point for the program to check if char is uppercase
 * @c: integer or char to check
 *
 * Return: 0 is false and 1 if true
 */
int _isupper(int c)
{
	const int MAX = 90;
	const int MIN = 65;

	if ((c >= MIN) && (c <= MAX))
		return (1);

	return (0);
}
