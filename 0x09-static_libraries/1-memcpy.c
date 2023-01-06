/**
 * _memcpy - A function that copies memory area.
 * @dest: Destination
 * @src: Source
 * @n: bytes to copy in memory
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
