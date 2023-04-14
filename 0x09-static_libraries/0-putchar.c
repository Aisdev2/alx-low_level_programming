#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - write tye character c to stdout.
 *
 * @c: the character to be printed.
 *
 * Return: 1 on success, abd -1 on failure.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
