#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		putchar(i < 10 ? i + '0' : i + 'a' - 10);

	putchar('\n');
	return (0);
}
