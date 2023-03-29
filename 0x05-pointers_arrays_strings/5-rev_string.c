#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: character value
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	/* Move the end pointer to the end of the string */

	while (*end)
	{
		end++;
	}

	end--;

	/* Swap the characters at the start and end positions */

	while (start < end)
	{
		char temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}
