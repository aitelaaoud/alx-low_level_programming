#include "main.h"
#include <string.h>

/**
 * _strlen - write a func that returns the lenght of string
 *
 * @s: inpute as pointeur
 *
 * Return: n
 */

int _strlen(char *s)
{
	int n;

	n = strlen(s); /**calculates the length of the character string s,
			* not counting the final null byte “\0”.
			*/
	return (n);
}
