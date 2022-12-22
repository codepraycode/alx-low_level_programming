#include <stdio.h>

/**
 * reverse_array - Reverse an array of integers
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
