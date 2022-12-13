#include "main.h"

/**
 * _isalpha - checks is a character is a letter, lowercase or uppercase
 * @c: The value to check
 *
 * Return: int return value
 */
int _isalpha(int c)
{
	/*
	 * Lowercase a = 97
	 * lowercase z = 122
	 * Uppercase A = 65
	 * Uppercase Z = 90
	 * lowercase, uppercase alphabets are in this range
	 */

	const int BOUNDARY_START = 97;
	const int BOUNDARY_STOP = 122;
	const int UPPER_BOUNDARY_START = 65;
	const int UPPER_BOUNDARY_STOP = 90;

	if ((c < UPPER_BOUNDARY_START) || (c > BOUNDARY_STOP))
		return (0);
	else if ((c >= UPPER_BOUNDARY_START) && (c <= UPPER_BOUNDARY_STOP))
		return (1);
	else if ((c >= BOUNDARY_START) && (c <= BOUNDARY_STOP))
		return (1);
	else
		return (0);

}
