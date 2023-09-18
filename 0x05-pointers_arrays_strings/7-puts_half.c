#include "main.h"
#include <string.h>

/**
 * puts_half - write a func that print the second half of string
 *
 * @str: input
 */

void puts_half(char *str)
{
	int len, midpoint, i;

	len = strlen(str);
	midpoint = len / 2;

	if ((len % 2) == 1)
		midpoint = ((len + 1) / 2);


	for (i = midpoint; str[i] != '\0'; i++)
		_putchar(str[i]);


	_putchar('\n');
}

