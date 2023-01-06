#include <stddef.h>
#include <string.h>
/**
 * _strstr - A function that locates a substring
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: a char
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}

	return (NULL);
}
