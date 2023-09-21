#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * Return: void
 * @a: the array to reverse
 * @n: number of elements of a
 */

void reverse_array(int *a, int n)
{

	int i, temp;

	i = 0;
	temp = 0;

	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
