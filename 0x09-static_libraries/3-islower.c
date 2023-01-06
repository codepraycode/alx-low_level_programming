#include "main.h"

/**
 * _islower - checks is a character is lowercase
 * @c: The value to check
 *
 * Return: int return value
 */
int _islower(int c)
{
	/*
	 * Lowercase a = 97
	 * lowercase z = 122
	 * lowercase alphabets are in this range
	 */

	const int BOUNDARY_START = 97;
	const int BOUNDARY_STOP = 122;

	if ((c < BOUNDARY_START) || (c > BOUNDARY_STOP))
		return (0);
	else
		return (1);

}
