#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: a pointer to the string
 *
 * Return: int, the converted integer
 */
int _atoi(char *s)
{
	double result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else
		{
			if (*s >= '0' && *s <= '9')
			{
				result = result * 10 + (*s - '0');
			}
			else if (result > 0)
				break;
		}

		s++;
	}

	return (sign * result);
}
