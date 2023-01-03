#include <stddef.h>
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string to search for
 * @accept: byte of segment to check from
 *
 * Return: a char
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
				return ((char *)s);
			a++;
		}
		s++;
	}

	return (NULL);
}
