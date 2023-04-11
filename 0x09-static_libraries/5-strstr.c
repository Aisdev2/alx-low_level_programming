#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function that locates a substring
 * @needle: substring
 * @haystack: a string
 * Return: haystack if found, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
