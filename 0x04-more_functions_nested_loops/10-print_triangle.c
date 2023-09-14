#include "main.h"

/**
 * print_triangle - print triangle
 * @size:length of the triangle
 */

void print_triangle(int size)
{
	int row, space, ch;

	for (row = 1; row <= size; row++)
	{
		for (space = size; j > i; space--)
		{
			_putchar(' ');
		}
		for (ch = 1; ch <= i; ch++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
