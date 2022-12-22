#include <stdio.h>

/**
 * cap_string - Capitalize all words of a string
 * @str: a pointer to a string
 *
 * Return: a string character
 */
char *cap_string(char *str)
{
	int i, capitalization_flag;

	capitalization_flag = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
			capitalization_flag = 1;

		else if ((str[i] == ',') || (str[i] == ';') || (str[i] == '.'))
			capitalization_flag = 1;

		else if ((str[i] == '!') || (str[i] == '?') || (str[i] == '"'))
			capitalization_flag = 1;

		else if ((str[i] == '(') || (str[i] == ')'))
			capitalization_flag = 1;

		else if ((str[i] == '{') || (str[i] == '}'))
			capitalization_flag = 1;

		else if (capitalization_flag && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			capitalization_flag = 0;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			capitalization_flag = 0;
	}

	return (str);
}
