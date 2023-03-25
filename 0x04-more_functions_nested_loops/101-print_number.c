#include "main.h"

/**
 * print_number - print integers
 * @n: integer to printed
 */

void print_number(int n)
{
	if (n < 0)
	{    /* Handle negative numbers*/
		_putchar('-');
		n = -n;

	}
	if (n / 10)
	{   /* Recursively print digits before the last one*/
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');  /* Print the last digit*/
}
