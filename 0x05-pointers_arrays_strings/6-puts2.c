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
void puts2(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}
