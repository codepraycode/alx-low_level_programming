#include <stdio.h>

/**
 * *_strcpy - Receives pointers and returns a dest pointer
 * @dest: a buffer pointer
 * @src: a src pointer
 *
 * Return: void (nothing)
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (tmp);
}
