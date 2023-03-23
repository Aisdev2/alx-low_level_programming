#include "main.h"

/**
 * _isalpha - check if c is lowercase or upper case letter
 *
 * @c: character to be checked if uppercase or lowercase
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
