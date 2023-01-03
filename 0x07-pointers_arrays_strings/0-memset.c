/**
 * _memset - A function that fills memory with a constant byte.
 * @s: a pointer to a char string
 * @b: a character string
 * @n: first number to bytes to fill in memory
 *
 * Return: a char value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
