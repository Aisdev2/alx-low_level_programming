#include "main.h"

/**
 * print_rev - reverse a string
 * @s: a character variable
 */

void print_rev(char *s)
{
	int r, p;

	for (p = 0; s[p] != '\0'; p++)
	r = p - 1;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}

	_putchar('\n');
}
