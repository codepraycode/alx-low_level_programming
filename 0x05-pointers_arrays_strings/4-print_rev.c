#include <stdio.h>

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


/**
 * print_rev - Takes a pointer to a string and reverses it
 * @s: a string pointer
 *
 * Return: void (nothing)
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
