#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hr, min;

	hr = 0;

	while (hr <= 23)
	{
		int min = 0;

		while (min <= 59)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}
		hr++;
	}
}
