#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenates two strings by copying a max of n bytes
 * from string src into dest
 * Return: pointer to resulting string dest
 * @dest: the string storing the copy
 * @src: second string to be appended to the first
 * @n: number of bytes to be copied from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
