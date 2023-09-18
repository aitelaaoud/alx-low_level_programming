#include "main.h"
#include <string.h>
/**
 * rev_string - write a func that reverse a string
 *
 * @s: input
 */

void rev_string(char *s)
{
	int len, start, end;
	char temp;

	len = strlen(s);
	start = 0;
	end = len - 1;

	while (start < end)
	{
		/*swap characters at start and end*/
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;/*incremented by 1*/
		end--;/*decremented by 1*/
	}
}
