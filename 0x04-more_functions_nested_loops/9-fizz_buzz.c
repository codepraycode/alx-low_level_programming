#include <stdio.h>

/**
 * main - Entry point for the FizzBuzz program
 *
 * Return: 0 to terminate
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int fizz = ((i % 3) == 0) ? 1 : 0;
		int buzz = ((i % 5) == 0) ? 1 : 0;

		if (fizz && buzz)
			printf("FizzBuzz");
		else if (fizz)
			printf("Fizz");
		else if (buzz)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
