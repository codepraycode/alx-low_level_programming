/**
 * _strlen - takes pointer to a string and returns the length of the string
 * @s: string to check
 *
 * Return: void (nothing)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
