#include "main.h"

/**
 * _isupper - check if character is uper or lower case
 * @c: character value to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
