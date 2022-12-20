#include <stdio.h>

/**
 * print_array - Receives and prints an array
 * @a: a array pointer
 * @n: size of the array
 *
 * Return: void (nothing)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}

	printf("\n");

}
