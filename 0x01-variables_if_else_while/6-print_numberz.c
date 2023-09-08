#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 10 starting from 0 using putchar.
 *
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar("\n");

	return (0);
}
