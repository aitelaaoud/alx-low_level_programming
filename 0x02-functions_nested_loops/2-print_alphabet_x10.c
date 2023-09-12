#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int line = 0;

	while (line <= 9)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
		_putchar('\n');
		ch++;
		}
		line++;
	}
}
