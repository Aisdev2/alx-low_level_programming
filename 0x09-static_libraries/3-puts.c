#include "main.h"

/**
 * _puts - print a string
 * @str:contains the string to be printed
 */

void _puts(char *str)
{
	int s;

	s = 0;

	for (; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}

	_putchar('\n');
}
