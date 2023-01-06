#include <stdio.h>

/**
 * main - Entry point to print the number of arguments passed to it
 * @argc: Number of arguments passed to it
 * @argv: Array of arguments passed to it
 *
 * Return: an exit status
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
