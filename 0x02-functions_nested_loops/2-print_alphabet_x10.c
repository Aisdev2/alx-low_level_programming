#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * written by Aisosa
 */

void print_alphabet_x10(void)
{
	char letters, alpha;
	for (letters = '0'; letters <= '9'; letters++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
