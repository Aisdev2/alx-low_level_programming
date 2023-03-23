#include "main.h"

/**
 * print_sign - check if value is positive negative or zero and print the sign
 *
 * @n: values to be checked
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

	_putchar('\n');

	return (0);
}
