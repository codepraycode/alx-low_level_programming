#include "main.h"
/**
 * factorial - A function that prints the factorial of a given number
 * @n: number to factorize
 *
 * Return: a number which is the factorial of the given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
