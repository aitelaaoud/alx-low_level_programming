#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: the matrix
 * @size: the length of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;
	int secondary_diag_sum = 0;

	for (int i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - i - 1)];
	}

	printf("%d, ", main_diag_sum);
	printf("%d\n", secondary_diag_sum);
}
