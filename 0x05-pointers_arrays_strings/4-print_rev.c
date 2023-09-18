#include "main.h"
#include <string.h>

/**
 * print_rev - write a func that print a string, in reverse
 *
 * @s: input
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);

		i--;
	}
	_putchar('\n');
}
