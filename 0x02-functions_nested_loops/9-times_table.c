#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0'); /*get the first digit*/

			_putchar((prod % 10) + '0'); /*get the second digit*/
		}
		_putchar('\n');
	}
}
