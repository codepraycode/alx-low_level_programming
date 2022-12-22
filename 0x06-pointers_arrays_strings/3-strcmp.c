#include <stdio.h>

/**
 * _strcmp - compares a string
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 for true, 0 for false
 */
int _strcmp(char *s1, char *s2)
{
	size_t i;

	for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else
		return (s1[i] == '\0' ? -1 : 1);
}
