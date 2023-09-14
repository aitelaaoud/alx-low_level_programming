#include "main.h"
/**
 *print_numbers - function that print all numbers from
 *0 to 9
 *
 *Return: returns nothing
 */
void print_numbers(void)
{
	int number = 48;

	while (number < 58)
	{
		_putchar(number);

		number++;
	}
	_putchar('\n');
}
