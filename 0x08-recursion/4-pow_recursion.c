#include "main.h"
/**
 * _pow_recursion - A function that returns the exponent of x to y
 * @x: value to raise
 * @y: value to raise to
 *
 * Return: a number which is the power of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
