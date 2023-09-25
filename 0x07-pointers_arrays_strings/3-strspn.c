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
	unsigned int cpt = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				cpt++;
				break;
			}
			p++;
		}
		if (*p == '\0')
			break;
		s++;
	}

	return (cpt);
}
