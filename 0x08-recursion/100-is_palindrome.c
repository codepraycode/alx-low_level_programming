/**
 * _strlen_recursion - recursively get the size of a string
 * @s: string parameter
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * check_palindrome - Function to process if it is palindrome
 * @s: string to check
 * @n: cursor position
 *
 * Return: 1 if n is prime number or 0 if not.
 */
int check_palindrome(char *s, int n)
{
	if (n < 1)
		return (1);
	if (*s == *(s + n))
		return (check_palindrome(s + 1, n - 2));
	return (0);
}

/**
 * is_palindrome - Function to check if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 for true, 0 for false.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len - 1));
}
