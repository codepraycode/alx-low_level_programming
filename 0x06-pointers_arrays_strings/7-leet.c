#include <stdio.h>

/**
 * leet - Encodes string into 1337
 * @str: a pointer to a string to encode
 *
 * Return: a string character encoded
 */
char *leet(char *str)
{
	int i, j;
	char chsm[5] = {'a', 'e', 'o', 't', 'l'};
	char chbm[5] = {'A', 'E', 'O', 'T', 'L'};
	char val[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{

			if ((str[i] == chsm[j]) || (str[i] == chbm[j]))
			{
				str[i] = val[j];
				break;
			}
		}
	}
	return (str);
}
