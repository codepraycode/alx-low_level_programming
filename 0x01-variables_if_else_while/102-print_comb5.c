#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	int i, j;
	int bk = 0;

	for (i = 0; i <= 100; i++)
	{
		if (bk == 1)
			break;

		for (j = 1; j <= 100; j++)
		{
			int d1 = i % 10;
			int d2 = i / 10;
			int d3 = j / 10;
			int d4 = j % 10;

			if (d1 == d3 && d1 == d4 && d2 == d3 && d2 == d4)
				continue;

			putchar('0' + d2);
			putchar('0' + d1);
			putchar(' ');
			putchar('0' + d3);
			putchar('0' + d4);

			if ((i == 98 && j == 99))
			{
				bk = 1;
				break;
			}

			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
