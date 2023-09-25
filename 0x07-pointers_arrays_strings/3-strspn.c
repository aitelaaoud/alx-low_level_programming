#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix string
 *
 * Return: the length of the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		while (*p)
		{
			if (*s == *p)
			{
				len++;
				break;
			}
			p++;
		}
		if (*p == '\0')
			break;
		s++;
	}

	return (len);
}
