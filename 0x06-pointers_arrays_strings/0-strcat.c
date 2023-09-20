#include "main.h"
#include "string.h"

/**
 * _strcat - write a func that concatenate two string
 * @dest: input 1
 * @src: input 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
