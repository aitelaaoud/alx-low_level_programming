#include "main.h"
#include <string.h>

/**
 * puts_half - write a func that print the second half of string
 *
 * @str: input
 */

void puts_half(char *str)
{
	int len, midpoint, start, i;

	len = strlen(str);
	midpoint = len / 2;
	start = midpoint;
	i = start;

	while (i < len)
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
