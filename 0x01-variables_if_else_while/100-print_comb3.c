/*
 * Adding header files
 * Using put char to peint out values
 * Usimg loop
 * Return 0
 */

/**
 * main - print the possible combination of two digit
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int combine;

	for (combine = 0; combine < 100; combine++)
	{
		putchar((combine / 10) + '0');
		putchar((combine % 10) + '0');

		if (combine < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
