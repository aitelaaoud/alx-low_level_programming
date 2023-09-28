#include "main.h"
/**
 * factorial -  a function that returns the factorial of a given number
 * @n: integer
 * Return: 0
 */
int factorial(int n)
{
	/**Error case: factorial of a negative number is undefined*/
	if (n < 0)
		return (-1);

	/** Base case: factorial of 0 is 1*/
	if (n == 0)
		return (1);

	/**Recursive case: multiply n with factorial of (n-1)*/
	return (n * factorial(n - 1));
}
