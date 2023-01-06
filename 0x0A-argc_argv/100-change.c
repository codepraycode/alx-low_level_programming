#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to print the number of arguments passed to it
 * @argc: Number of arguments passed to it
 * @argv: Array of arguments passed to it
 *
 * Return: an exit status
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[argc - 1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}

	printf("%d\n", coins);
	return (0);
}
