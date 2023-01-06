#include <stddef.h>
/**
 * _strchr - A function that locates a character in string.
 * @s: string to search
 * @c: string to search for
 *
 * Return: a char value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
