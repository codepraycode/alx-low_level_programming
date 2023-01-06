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
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);

		if (!(j))
		{
			printf("Error\n");
			return (1);
		}

		add += j;
	}

	printf("%d\n", add);
	return (0);
}
