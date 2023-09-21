#include "main.h"

/**
 * *leet - encodes a string into 1337
 * Return: pointer to resulting string
 * @str: string to be encoded
 */
char *leet(char *str)
{
	int i, j;

	char alpha[80] = "aAeEoOtTlL";
	char numbers[80] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = numbers[j / 2];
			}
		}
	}
	return (str);
}
