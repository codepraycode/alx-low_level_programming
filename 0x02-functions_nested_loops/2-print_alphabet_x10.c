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
}

/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 1;

	do {
		print_alphabet();
		_putchar('\n');
		count++;
	} while (count < 10);
}
