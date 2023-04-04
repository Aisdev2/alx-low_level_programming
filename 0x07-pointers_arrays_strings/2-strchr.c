#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locate a character in a string
 * @s: the string
 * @c: the chararcter to be located in the string
 * Return: c if the caracter is present and NULL if not present
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
