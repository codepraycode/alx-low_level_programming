#include <stdio.h>

/**
 * main - entry point for program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	char sCh;
	char bCh;

	for (sCh = 'a'; sCh <= 'z'; sCh++)
	{
		putchar(sCh);
	}

	for (bCh = 'A'; bCh <= 'Z'; bCh++)
	{
		putchar(bCh);
	}

	putchar('\n');
	return (0);

}
