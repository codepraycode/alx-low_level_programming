#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i >= 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
