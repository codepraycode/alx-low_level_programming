#include "main.h"

/**
 * print_triangle - Function to print a triangle
 * @size: size of the triangle
 *
 * Return: void (nothing)
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, s, h, ms;
		for (i = 1; i <= size; i++)
		{
			ms = size - i;
			for (s = 0; s < ms; s++)
				_putchar(' ');

			for (h = 0; h < i; h++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
