#include "main.h"
/**
 * _strlen_recursion - A function that prints the length of a string
 * @s: string to count
 *
 * Return: a number which is the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
