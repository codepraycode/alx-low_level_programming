#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - prints all alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	putchar('\n');
}

/**
 * main - entry point for the program
 *
 * Return: 0 as a terminator
 */
int main(void)
{
	print_alphabet();
	return (0);
}
