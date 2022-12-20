#include "main.h"
/**
 * _puts - takes pointer to a string and prints the string
 * @str: string to print
 *
 * Return: void (nothing)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
