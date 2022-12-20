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
 * rev_string - Takes a pointer to a string and reverses it
 * @s: a string pointer
 *
 * Return: void (nothing)
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;

	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
