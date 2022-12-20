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
 * puts_half - Takes a pointer to a string and prints half of the string
 * @str: a string pointer
 *
 * Return: void (nothing)
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;
	int str_len = !((len % 2) == 0) ? (len - 1) / 2 : len / 2;

	for (i = str_len; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}
