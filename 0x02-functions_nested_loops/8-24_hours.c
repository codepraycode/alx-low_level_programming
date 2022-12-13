#include "main.h"

/**
 * jack_bauer - prints every minute of the day (00:00 - 23:59)
 *
 * Return: void
 */
void jack_bauer(void)
{
	int minutes, seconds;
	
	minutes = 0;
	seconds = 0;
	
	do{
		if (seconds == 60)
		{
			minutes++;
			seconds = 0;
		}

		_putchar((minutes / 10) + 48);
		_putchar((minutes % 10) + 48);
		_putchar(':');
		_putchar((seconds / 10) + 48);
		_putchar((seconds % 10) + 48);
		_putchar('\n');

		seconds++;
	} while ((minutes < 24) && (seconds < 60));
}
