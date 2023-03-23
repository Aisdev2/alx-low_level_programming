#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * written by Aisosa
 */

void print_alphabet(void)
{
	char letters;

	letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}

	_putchar('\n');
}
