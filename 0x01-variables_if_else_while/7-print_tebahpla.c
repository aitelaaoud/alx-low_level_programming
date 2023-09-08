#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

