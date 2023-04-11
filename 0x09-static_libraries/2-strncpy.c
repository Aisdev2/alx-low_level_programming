#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: an integer
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* check if incremented i is less than the n bytes */
	/* find end of string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Adding a terminating null byte to the end of the copied file*/
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	/* returning the pointer string */
	return (dest);
}
