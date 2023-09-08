#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 48; /*48: decimal rep of 0*/

	while (digit <= 102) /*102: decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96*/
		if (digit == 57) /*57: decimal rep of 9*/
			digit += 39;
		digit++; /* debut with 97:decimal rep of a*/
	}
	putchar('\n');

	return (0);
}
