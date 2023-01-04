int tmp_prime(int n, int i);

/**
 * _divisor - check if number is prime
 * @n: interger1 to check
 * @m: integer2 to check
 *
 * Return: 1 if true, 0 if false.
 */
int _divisor(int n, int m)
{
	if ((m % n) == 0)
		return (0);
	else if ((m / 2) > n)
		return (_divisor((n + 2), m));
	else
		return (1);
}

/**
 * is_prime_number - A function that returns 1 for prime number, otherwise 0
 * @n: number to check
 *
 * Return: 1 if n is prime number or 0 if not.
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && (n != 2)) || n < 2)
		return (0);
	else
		return (_divisor(3, n));
}
