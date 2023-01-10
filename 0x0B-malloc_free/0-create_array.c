#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, initilizes it with a specific char
 * @size: size of array of chars
 * @c: Char to intialize with
 *
 * Return: Charater
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
