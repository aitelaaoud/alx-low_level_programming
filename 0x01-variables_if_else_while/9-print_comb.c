#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, --- 9
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
	{
		putchar(digit + '0');
		if (digit < 9)
		{
			putchar(',');
			putchar(32); /*32: decimal rep of space*/
		}
	}
	putchar('\n');
	return (0);
}
