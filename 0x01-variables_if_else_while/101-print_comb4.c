#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *		combinations of tree digits
 * Return: Always 0
 */

int main(void)
{
	int digit1, digit2, digit3;

	digit1 = 0;

	while (digit1 <= 7)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 8)
		{
			digit3 = digit2 + 1;
			while (digit3 <= 9)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
				putchar('0' + digit3);

				if (digit1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
