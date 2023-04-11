#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: holds the string value
 * @accept: hold the set byte to be checked in the string
 * Return: s if found and NULL if not found;
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			++p;
		}
		++s;
	}

	return (NULL);
}
