#include  <stdio.h>

/**
 * main - entry point in program
 *
 * Return: 0 for terminating program
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;


	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));

	return (0);
}
