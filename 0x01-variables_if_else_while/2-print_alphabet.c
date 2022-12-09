#include <stdio.h>

/**
 * main - entry point in program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
