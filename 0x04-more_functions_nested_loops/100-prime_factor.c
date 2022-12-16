#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for the prime factor program
 *
 * Return: 0 to terminate program
 */
int main(void)
{
	long largest_prime_factor, i;
	long num = 612852475143;

	largest_prime_factor = 1;

	while (num % 2 == 0)
	{
		largest_prime_factor = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_prime_factor = i;
			num /= i;
		}
	}

	if (num > 2)
		largest_prime_factor = num;

	printf("%ld\n", largest_prime_factor);
	return (0);
}
