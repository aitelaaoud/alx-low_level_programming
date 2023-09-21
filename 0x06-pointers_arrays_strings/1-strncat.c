#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * Return: pointer to resulting string
 * @dest: string to be appended upon
 * @src: second string to be appended to the first
 * @n: number of bytes from src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;

	}
	dest[i] = '\0';


	return (dest);
}
