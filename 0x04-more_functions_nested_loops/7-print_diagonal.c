#include "main.h"
/**
 *print_diagonal - prints a diagonal
 *@n:parameter
 *Return:returns nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int row = 1;

	while (row <= n)
	{
		int space = 1;

		while (space < row)
		{
			_putchar(' ');
			space++;
		}

		_putchar('\\');
		_putchar('\n');
		row++;
	}
}
