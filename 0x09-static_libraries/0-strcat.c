#include "main.h"

/**
 * *_strcat - concatenates two strings
 * Return: pointer to resulting string
 * @dest: a pointer to the first string
 * @src: second string to be appended to the first
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')/*find the length of dest*/
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];/*copy each character from src to dest*/
		i++;
		j++;
	}
	dest[i] = '\0';/*add a null character to dest*/
	return (dest);
}
