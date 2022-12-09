#include <stdio.h>

/**
 * main - entry point for program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;

		putchar(ch);
	}

	putchar('\n');

	return (0);
}
