#include "main.h"

/**
 * print_most_numbers - print value fromt 0 to 9 but omit 2 and 4
 *
 * written by Aisosa
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		_putchar(num);
	}

		_putchar('\n');
}
