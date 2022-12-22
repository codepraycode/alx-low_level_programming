#include <stdio.h>

/**
 * string_toupper - convert lowercase strings to uppercase strings
 * @str: a pointer to a string
 *
 * Return: a string character
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
	}

	return (str);
}
