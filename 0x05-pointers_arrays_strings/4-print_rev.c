#include "main.h"

/**
 * print_rev - reverse a string
 * @s: a character variable
 */

void print_rev(char *s)
{
	char *end_ptr = s;

	while (*end_ptr != '\0')
	{
		end_ptr++;
	}

	end_ptr--;

	while (end_ptr >= s)
	{
		_putchar(*end_ptr);
		end_ptr--;
	}

	_putchar('\n');
}
