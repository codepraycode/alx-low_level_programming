/**
 * _strspn - A function that gets te length of a prefix substring
 * @s: string segment
 * @accept: byte of segment to check from
 *
 * Return: a number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}

	return (count);
}
