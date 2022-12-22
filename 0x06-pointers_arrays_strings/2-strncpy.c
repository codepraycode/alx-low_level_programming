#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: returing string
 * @src: string to concatenate
 * @n: n byte to use
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
