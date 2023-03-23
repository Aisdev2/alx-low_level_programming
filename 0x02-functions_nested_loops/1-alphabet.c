#include "main.h"

/**
 * main - prin alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char letters;

	letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}

	_putchar('\n');

	return (0);
}
