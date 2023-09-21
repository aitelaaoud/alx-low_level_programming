#include "main.h"

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
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */

	i = 0;
	while (i < n && src[i] != '\0')
		dest[i] = src[i];
		i++;

	/**
	 * if the length of source is less than n
	 * write additional nulbytes to dest to
	 * ensure that a total of n bytes is written
	 */

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
