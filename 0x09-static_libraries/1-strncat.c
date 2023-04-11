#include "main.h"

/**
 * _strncat - concatenate two string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: holding a number of byte require for src to use
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	/* find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	/*Nul treminating the destination string */
	dest[i + j] = '\0';

	/* Return the resulting string */
	return (dest);
}
