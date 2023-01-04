#include "main.h"


/**
 * _sqrt_recursion_helper - A supporting function
 * @n: value to find it square root
 * @i: initial guess of square root
 *
 * Return: a number which is the natural square root of the number n
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);

	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - A function to return the natural square root of a number
 * @n: value to find it square root
 *
 * Return: a number which is the natural square root of the number n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}

