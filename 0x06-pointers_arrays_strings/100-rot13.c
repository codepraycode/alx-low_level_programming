#include <stdio.h>

/**
 * rot13 - Encodes string using rot13
 * @str: a pointer to a string to encode
 *
 * Return: a string character encoded
 */
char *rot13(char *str)
{
	int i, j;
	char ch[2] = {'a', 'A'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if ((str[i] >= ch[j]) && (str[i] <= (ch[j] + 25)))
				str[i] = (str[i] - ch[j] + 13) % 26 + ch[j];
		}
	}
	return (str);
}
