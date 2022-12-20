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
 * puts2 - Takes a pointer to a string and prints every other character
 * @str: a string pointer
 *
 * Return: void (nothing)
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (!((len % 2) == 0))
		printf("%c", str[(len - 1) / 2]);

	for (i = (len / 2); i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}
