#include "main.h"

/**
 * rot13 - encodes a string using rot13 (rotate 13 places)
 * Return: pointer to encoded string
 * @str: string to be encoded
 */
char *rot13(char *str)
{
	int i, j;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}

	}
	return (str);
}
