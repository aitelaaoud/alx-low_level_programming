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
	strncat(dest, src, n);
	return (dest);
}
