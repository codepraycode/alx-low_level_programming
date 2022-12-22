#include <stdio.h>

/**
 * cap_string - Capitalize all words of a string
 * @str: a pointer to a string
 *
 * Return: a string character
 */
char *cap_string(char *str)
{
	int i, ii, capitalization_flag = 1;
	char ch[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', ' '};

	for (i = 0; str[i] != '\0'; i++)
	{

		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			capitalization_flag = 0;
		else if ((str[i] >= '0') && (str[i] <= '9'))
			capitalization_flag = 0;
		else if (capitalization_flag && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			capitalization_flag = 0;
		}
		else
		{
			for (ii = 0; ii < 13; ii++)
			{
				if (ch[ii] == str[i])
				{
					capitalization_flag = 1;
					break;
				}
			}
		}
	}
	return (str);
}
