#include "main.h"

/**
 * print_numbers - print numbers for 0 to 9
 *
 * written by Aisosa
 */

void print_numbers(void)
{
	int numbers;

	numbers = '0';

	while (numbers <= '9')
	{
		_putchar(numbers);
		numbers++;
	}

	_putchar('\n');
}
