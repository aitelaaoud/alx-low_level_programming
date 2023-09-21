#include "main.h"

/**
 * print_number - prints an int
 * Return: void
 * @n: int to be printed
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}

	if ((number / 10) != 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');

}
