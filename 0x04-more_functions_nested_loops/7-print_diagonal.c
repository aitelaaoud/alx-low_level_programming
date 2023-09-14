#include "main.h"
/**
 *print_diagonal - prints a diagonal
 *@n:parameter
 *Return:returns nothing
 */
void print_diagonal(int n)
{
	int len, space;
	if (n > 0)
	{
		for (len = 0; len < n; len++) /*len is the number of diagonal*/
		{
			for (space = 0; space < len; space++) /*space is the indentation for each diagonal line.*/
				_putchar(' ');

			_putchar('\\');

			if (len == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
