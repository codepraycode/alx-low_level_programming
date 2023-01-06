#include <stdio.h>

/**
 * main - Entry point to print the number of arguments passed to it
 * @argc: Number of arguments passed to it
 * @argv: Array of arguments passed to it
 *
 * Return: an exit status
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
